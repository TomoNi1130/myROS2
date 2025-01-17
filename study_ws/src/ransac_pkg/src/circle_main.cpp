#include <rclcpp/rclcpp.hpp>
#include <iostream>
#include <study_interface/msg/cloud.hpp>
#include <study_interface/msg/circle.hpp>
#include <vector>
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
            publisher_ = this->create_publisher<study_interface::msg::Circle>("circle_data", 10);

            RCLCPP_INFO(this->get_logger(), "CircleRansac node has been started.");
      }

private:
      void topicCallback(const study_interface::msg::Cloud::SharedPtr msg)
      {
            std::vector<double> _x;
            std::vector<double> _y;
            RANSAC ransac_device(1500, 0.1);
            for (size_t i = 0; i < msg->cloudx.size(); i++)
            {
                  _x.push_back(msg->cloudx[i]);
                  _y.push_back(msg->cloudy[i]);
            }
            std::vector<circle> answers = ransac_device.circle_ransac(_x, _y, 1);
            study_interface::msg::Circle pub_circle;
            for (size_t i = 0; i < answers.size(); i++)
            {
                  pub_circle.centerx.push_back(answers[i].center_x);
                  pub_circle.centery.push_back(answers[i].center_y);
                  pub_circle.radius.push_back(answers[i].radius);
            }
            publisher_->publish(pub_circle);
      }

      rclcpp::Subscription<study_interface::msg::Cloud>::SharedPtr subscription_; // サブスクライバー
      rclcpp::Publisher<study_interface::msg::Circle>::SharedPtr publisher_;
};

int main(int argc, char *argv[])
{
      rclcpp::init(argc, argv);                       // ROS 2ノードを初期化
      rclcpp::spin(std::make_shared<CircleRansac>()); // ノードをスピン
      rclcpp::shutdown();                             // ROS 2ノードを終了
      return 0;
}
