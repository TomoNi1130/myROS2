#include <memory>
#include "matplotlibcpp.h"
#include "rclcpp/rclcpp.hpp"
#include "study_interface/msg/circle.hpp"
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

class Sircle_drower : public rclcpp::Node
{
public:
      Sircle_drower()
          : Node("sircle_drower")
      {
            subscription_ = this->create_subscription<study_interface::msg::Circle>(
                "circle_data", 10, std::bind(&Sircle_drower::chatter_callback, this, _1));
      }

private:
      void chatter_callback(const study_interface::msg::Circle::SharedPtr msg) const
      {
            plt::clf();
            drow_axes(5);
            size_t points_num = 500; // 描画のために使用する点の数
            double theta_unit = 2.0 * pi / points_num;
            for (size_t j = 0; j < msg->radius.size(); j++)
            {
                  std::vector<double> plt_x, plt_y;
                  for (size_t i = 0; i < points_num; i++)
                  {
                        plt_x.push_back(cos(theta_unit * i) * msg->radius[j] + msg->centerx[j]);
                        plt_y.push_back(sin(theta_unit * i) * msg->radius[j] + msg->centery[j]);
                  }
                  plt::plot(plt_x, plt_y);
            }
            plt::xlabel("X");
            plt::ylabel("Y");
            plt::pause(0.01);
      }
      rclcpp::Subscription<study_interface::msg::Circle>::SharedPtr subscription_;
};

int main(int argc, char *argv[])
{
      rclcpp::init(argc, argv);
      plt::show();
      rclcpp::spin(std::make_shared<Sircle_drower>());
      rclcpp::shutdown();
      return 0;
}
