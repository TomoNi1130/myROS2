#include <memory>
#include "matplotlibcpp.h"
#include "rclcpp/rclcpp.hpp"
#include "study_interface/msg/line.hpp"
#include <vector>

using std::placeholders::_1;

namespace plt = matplotlibcpp;

double pi = 3.1415;

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

class line_drower : public rclcpp::Node
{
public:
      line_drower()
          : Node("line_drower")
      {
            subscription_ = this->create_subscription<study_interface::msg::Line>(
                "line_data", 10, std::bind(&line_drower::chatter_callback, this, _1));
      }

private:
      void chatter_callback(const study_interface::msg::Line::SharedPtr msg) const
      {
            plt::clf();
            drow_axes(5);
            for (size_t j = 0; j < msg->high_x.size(); j++)
            {
                  std::vector<double> x, y;
                  double x_width = msg->high_x[j] - msg->low_x[j];
                  double y_width = msg->high_y[j] - msg->low_y[j];

                  if (x_width > y_width)
                  {
                        for (int i = 0; i < 2; i++)
                        {
                              x.push_back(msg->low_x[j] + x_width * i);
                              y.push_back(-(msg->a[j] / msg->b[j] * (msg->low_x[j] + x_width * i)) - msg->c[j] / msg->b[j]);
                        }
                  }
                  else
                  {
                        for (int i = 0; i < 2; i++)
                        {
                              y.push_back(msg->low_y[j] + y_width * i);
                              x.push_back(-(msg->b[j] / msg->a[j] * (msg->low_y[j] + y_width * i)) - msg->c[j] / msg->a[j]);
                        }
                  }
                  plt::plot(x, y);
            }
            plt::xlabel("X");
            plt::ylabel("Y");
            plt::pause(0.01);
      }
      rclcpp::Subscription<study_interface::msg::Line>::SharedPtr subscription_;
};

int main(int argc, char *argv[])
{
      rclcpp::init(argc, argv);
      plt::show();
      rclcpp::spin(std::make_shared<line_drower>());
      rclcpp::shutdown();
      return 0;
}
