#include <iostream>
#include <memory>
#include <vector>
#include <cmath>
#include <boost/asio.hpp>

#include "rclcpp/rclcpp.hpp"
#include <sensor_msgs/msg/laser_scan.hpp>
#include "interface_pkg/msg/ransac.hpp"

#include "ransac.cpp"

using std::placeholders::_1;

class lider_listener : public rclcpp::Node
{
public:
      lider_listener()
          : Node("lider_listener")
      {
            subscription_ = this->create_subscription<sensor_msgs::msg::LaserScan>(
                "scan", 10, std::bind(&lider_listener::topic_callback, this, _1));
            publisher_ = this->create_publisher<interface_pkg::msg::Ransac>("ransac_data", 10);
      }

private:
      void topic_callback(const sensor_msgs::msg::LaserScan &msg) const
      {
            cloud_prosess cloud(msg.ranges.size());
            for (std::vector<float>::size_type i = 0; i < msg.ranges.size(); ++i)
            {
                  if (!msg.ranges.empty() && msg.ranges[i] < 5)
                        cloud.range_to_cloud(msg.ranges[i], i);
            }
            std::vector<line_segment> ransac_lines = cloud.ransac(1, 500, 0.02, 50);
            interface_pkg::msg::Ransac ransac_msg;
            ransac_msg.high_x = ransac_lines[0].high_x;
            ransac_msg.low_x = ransac_lines[0].low_x;
            ransac_msg.high_y = ransac_lines[0].high_y;
            ransac_msg.low_y = ransac_lines[0].low_y;
            ransac_msg.a = ransac_lines[0].a;
            ransac_msg.b = ransac_lines[0].b;
            ransac_msg.c = ransac_lines[0].c;
            ransac_msg.distance = ransac_lines[0].distance;
            ransac_msg.theta = ransac_lines[0].theta;
            std::cout << ransac_lines[0].theta << std::endl;
            publisher_->publish(ransac_msg);
      }
      rclcpp::Publisher<interface_pkg::msg::Ransac>::SharedPtr publisher_;
      rclcpp::Subscription<sensor_msgs::msg::LaserScan>::SharedPtr subscription_;
};

int main(int argc, char *argv[])
{
      rclcpp::init(argc, argv);
      rclcpp::spin(std::make_shared<lider_listener>());
      rclcpp::shutdown();

      return 0;
}
