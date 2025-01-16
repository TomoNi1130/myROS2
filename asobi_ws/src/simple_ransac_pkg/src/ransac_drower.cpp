#include <memory>
#include "matplotlibcpp.h"

#include "rclcpp/rclcpp.hpp"
#include "interface_pkg/msg/ransac.hpp"

using std::placeholders::_1;

namespace plt = matplotlibcpp;

struct line_segment
{
      // 線分にするためのデータ
      double low_x, high_x, low_y, high_y;
      // ax+by+c = 0  y= a/b*x+c/b
      double a, b, c;

      double distance; // 原点との距離

      double theta; // 角度
};

void drow_axes(int x) // 座標軸を書く用の関数
{
      std::vector<double> x_x_line, y_x_line, x_y_line, y_y_line;

      for (int i = -1; i < 2; i++)
      {
            x_x_line.push_back(i * x);
            y_x_line.push_back(0);
            y_y_line.push_back(i * x);
            x_y_line.push_back(0);
      }
      plt::plot(x_x_line, y_x_line);
      plt::plot(x_y_line, y_y_line);
}

void draw_line(line_segment const &line)
{
      std::vector<double> x, y;
      double x_width = line.high_x - line.low_x;
      double y_width = line.high_y - line.low_y;

      if (x_width > y_width)
      {
            for (int i = 0; i < 2; i++)
            {
                  x.push_back(line.low_x + x_width * i);
                  y.push_back(-(line.a / line.b * (line.low_x + x_width * i)) - line.c / line.b);
            }
      }
      else
      {
            for (int i = 0; i < 2; i++)
            {
                  y.push_back(line.low_y + y_width * i);
                  x.push_back(-(line.b / line.a * (line.low_y + y_width * i)) - line.c / line.a);
            }
      }
      plt::plot(x, y);
}

class ransac_line_drawer : public rclcpp::Node
{
public:
      ransac_line_drawer() : Node("ransac_line_drawer")
      {
            subscription_ = this->create_subscription<interface_pkg::msg::Ransac>( // CHANGE
                "ransac_data", 10, std::bind(&ransac_line_drawer::topic_callback, this, _1));
      }

private:
      void topic_callback(const interface_pkg::msg::Ransac &msg)
      {
            plt::clf();
            drow_axes(5);
            plt::xlabel("X");
            plt::ylabel("Y");

            line_segment line;
            line.low_x = msg.low_x;
            line.high_x = msg.high_x;
            line.low_y = msg.low_y;
            line.high_y = msg.high_x;
            line.a = msg.a;
            line.b = msg.b;
            line.c = msg.c;
            line.distance = msg.distance;
            line.theta = msg.theta;

            draw_line(line);

            plt::pause(0.01);
      }

      rclcpp::Subscription<interface_pkg::msg::Ransac>::SharedPtr subscription_;
};

int main(int argc, char *argv[])
{
      rclcpp::init(argc, argv);
      plt::show();
      rclcpp::spin(std::make_shared<ransac_line_drawer>());
      rclcpp::shutdown();
      return 0;
}
