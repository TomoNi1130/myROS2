#include <rclcpp/rclcpp.hpp>
#include <iostream>
#include "study_interface/msg/cloud.hpp"
#include "study_interface/msg/circle.hpp"
#include "study_interface/msg/line.hpp"
#include <vector>
#include "ransac.hpp"
#include "circle_ransac.cpp"
#include "line_ransac.cpp"

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
            circle_publisher_ = this->create_publisher<study_interface::msg::Circle>("circle_data", 10);
            line_publisher_ = this->create_publisher<study_interface::msg::Line>("line_data", 10);

            RCLCPP_INFO(this->get_logger(), "CircleRansac node has been started.");
      }

private:
      void topicCallback(const study_interface::msg::Cloud::SharedPtr msg)
      {
            std::vector<double> _x;
            std::vector<double> _y;

            for (size_t i = 0; i < msg->cloudx.size(); i++)
            {
                  _x.push_back(msg->cloudx[i]);
                  _y.push_back(msg->cloudy[i]);
            }
            RANSAC ransac_device(6000, 0.12, _x, _y);
            std::vector<line_segment> line_answers = ransac_device.line_ransac(1);
            std::vector<circle> circle_answers = ransac_device.circle_ransac(1);
            study_interface::msg::Circle pub_circle;
            study_interface::msg::Line pub_line;
            for (size_t i = 0; i < circle_answers.size(); i++)
            {
                  pub_circle.centerx.push_back(circle_answers[i].center_x);
                  pub_circle.centery.push_back(circle_answers[i].center_y);
                  pub_circle.radius.push_back(circle_answers[i].radius);
            }
            for (size_t i = 0; i < line_answers.size(); i++)
            {
                  pub_line.high_x.push_back(line_answers[i].high_x);
                  pub_line.low_x.push_back(line_answers[i].low_x);
                  pub_line.high_y.push_back(line_answers[i].high_y);
                  pub_line.low_y.push_back(line_answers[i].low_y);
                  pub_line.a.push_back(line_answers[i].a);
                  pub_line.b.push_back(line_answers[i].b);
                  pub_line.c.push_back(line_answers[i].c);
                  pub_line.distance.push_back(line_answers[i].distance);
                  pub_line.theta.push_back(line_answers[i].theta);
            }
            circle_publisher_->publish(pub_circle);
            line_publisher_->publish(pub_line);
      }

      rclcpp::Subscription<study_interface::msg::Cloud>::SharedPtr subscription_; // サブスクライバー
      rclcpp::Publisher<study_interface::msg::Circle>::SharedPtr circle_publisher_;
      rclcpp::Publisher<study_interface::msg::Line>::SharedPtr line_publisher_;
};

int main(int argc, char *argv[])
{
      rclcpp::init(argc, argv);                       // ROS 2ノードを初期化
      rclcpp::spin(std::make_shared<CircleRansac>()); // ノードをスピン
      rclcpp::shutdown();                             // ROS 2ノードを終了
      return 0;
}
