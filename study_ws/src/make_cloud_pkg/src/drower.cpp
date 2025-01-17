#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "study_interface/msg/cloud.hpp"
#include "matplotlibcpp.h"

using std::placeholders::_1;
namespace plt = matplotlibcpp;

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

class Drower : public rclcpp::Node
{
public:
      Drower()
          : Node("drower")
      {
            subscription_ = this->create_subscription<study_interface::msg::Cloud>(
                "cloud_data", 10, std::bind(&Drower::chatter_callback, this, _1));
      }

private:
      void chatter_callback(const study_interface::msg::Cloud::SharedPtr msg) const
      {
            plt::clf();
            drow_axes(5);
            for (size_t i = 0; i < msg->cloudx.size(); i++)
                  plt::scatter(std::vector<double>(msg->cloudx.begin(), msg->cloudx.end()),
                               std::vector<double>(msg->cloudy.begin(), msg->cloudy.end()));
            plt::xlabel("X");
            plt::ylabel("Y");
            plt::pause(0.01);
      }
      rclcpp::Subscription<study_interface::msg::Cloud>::SharedPtr subscription_;
};

int main(int argc, char *argv[])
{
      rclcpp::init(argc, argv);
      plt::show();
      rclcpp::spin(std::make_shared<Drower>());
      rclcpp::shutdown();
      return 0;
}
