#include <rclcpp/rclcpp.hpp>
#include <study_interface/msg/cloud.hpp> // 自作メッセージのヘッダーをインクルード
#include "ransac.hpp"
#include "circle_ransac.cpp"

class CircleRansac : public rclcpp::Node
{
public:
      CircleRansac()
          : Node("circle_ransac")
      { // ノード名を設定
            // サブスクライバーを初期化
            subscription_ = this->create_subscription<study_interface::msg::Cloud>(
                "cloud_data", 10, // トピック名とキューサイズ
                std::bind(&CircleRansac::topicCallback, this, std::placeholders::_1));

            RCLCPP_INFO(this->get_logger(), "CircleRansac node has been started.");
      }

private:
      void topicCallback(const study_interface::msg::Cloud::SharedPtr msg)
      {
            // 受信したメッセージのデータを表示（例として最初の3つのデータを出力）
            RCLCPP_INFO(this->get_logger(), "Received Cloud Data:");
            for (size_t i = 0; i < msg->cloudx.size(); ++i)
            {
                  RCLCPP_INFO(this->get_logger(), "data[%zu] = %f", i, msg->cloudx[i]);
            }
      }

      rclcpp::Subscription<study_interface::msg::Cloud>::SharedPtr subscription_; // サブスクライバー
};

int main(int argc, char *argv[])
{
      rclcpp::init(argc, argv);                       // ROS 2ノードを初期化
      rclcpp::spin(std::make_shared<CircleRansac>()); // ノードをスピン
      rclcpp::shutdown();                             // ROS 2ノードを終了
      return 0;
}
