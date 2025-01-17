#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

using namespace std::chrono_literals;

class SimpleTalker : public rclcpp::Node
{
public:
      // コンストラクタ
      SimpleTalker()
          : Node("simple_talker") // ノード名をsimple_talkerで初期化
      {
            publisher_ = this->create_publisher<std_msgs::msg::String>("chatter", 10);
            timer_ = this->create_wall_timer(100ms, std::bind(&SimpleTalker::timer_callback, this));
      }

private:
      // タイマによって呼び出される関数
      void timer_callback()
      {
            std_msgs::msg::String msg;
            msg.data = "hello, world!";
            RCLCPP_INFO(this->get_logger(), "publish: %s", msg.data.c_str());
            publisher_->publish(msg);
      }
      rclcpp::TimerBase::SharedPtr timer_;
      rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
};

int main(int argc, char *argv[])
{
      rclcpp::init(argc, argv);
      rclcpp::spin(std::make_shared<SimpleTalker>());
      rclcpp::shutdown();
      return 0;
}
