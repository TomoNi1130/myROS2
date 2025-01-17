#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include <random>
#include <cmath>

#include "rclcpp/rclcpp.hpp"
#include "study_interface/msg/cloud.hpp"

double pi = 3.1415;

using namespace std::chrono_literals;

class cloud_maker : public rclcpp::Node
{
public:
      // コンストラクタ
      cloud_maker()
          : Node("cloud_maker") // ノード名をsimple_talkerで初期化
      {
            publisher_ = this->create_publisher<study_interface::msg::Cloud>("cloud_data", 10);
            timer_ = this->create_wall_timer(100ms, std::bind(&cloud_maker::timer_callback, this));
      }

private:
      // タイマによって呼び出される関数
      void timer_callback()
      {
            std::random_device seed_gen;
            std::mt19937 engine(seed_gen());
            std::uniform_real_distribution<double> dist1(3.0f, 3.1f);

            study_interface::msg::Cloud msg_cloud;
            double theta_unit = 2.0 * pi / msg_cloud.cloudx.size() / 2.0;
            for (size_t i = 0; i < msg_cloud.cloudx.size(); i++)
            {
                  double length = dist1(engine);
                  msg_cloud.cloudx[i] = length * cos(theta_unit * i) - 2.0;
                  msg_cloud.cloudy[i] = length * sin(theta_unit * i) + 2.0;
            }
            publisher_->publish(msg_cloud);
      }
      rclcpp::TimerBase::SharedPtr timer_;
      rclcpp::Publisher<study_interface::msg::Cloud>::SharedPtr publisher_;
};

int main(int argc, char *argv[])
{
      rclcpp::init(argc, argv);
      rclcpp::spin(std::make_shared<cloud_maker>());
      rclcpp::shutdown();
      return 0;
}
