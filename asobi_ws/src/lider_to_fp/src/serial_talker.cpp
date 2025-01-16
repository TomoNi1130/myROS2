#include <iostream>
#include <boost/asio.hpp>
#include "rclcpp/rclcpp.hpp"
#include "interface_pkg/msg/ransac.hpp"

using namespace boost::asio;

using std::placeholders::_1;

class serial_talker : public rclcpp::Node
{
public:
      serial_talker() : Node("serial_talker"), io(), serial(io, "/dev/ttyACM0")
      {
            serial.set_option(serial_port_base::baud_rate(9600));                  // ボーレート設定
            subscription_ = this->create_subscription<interface_pkg::msg::Ransac>( // CHANGE
                "ransac_data", 10, std::bind(&serial_talker::topic_callback, this, _1));
      }

private:
      io_service io;
      serial_port serial;
      void topic_callback(const interface_pkg::msg::Ransac &msg)
      {
            (void)msg;
            boost::system::error_code ec;

            std::string message = std::to_string(msg.theta) + "/";
            boost::asio::write(serial, buffer(message), ec);
            RCLCPP_INFO(this->get_logkgger(), "send:%s", message.c_str());
            if (ec)
            {
                  RCLCPP_ERROR(this->get_logger(), "Error writing to serial port: %s", ec.message().c_str());
            }
      }

      rclcpp::Subscription<interface_pkg::msg::Ransac>::SharedPtr subscription_;
};

int main(int argc, char *argv[])
{
      rclcpp::init(argc, argv);
      rclcpp::spin(std::make_shared<serial_talker>());
      rclcpp::shutdown();
      return 0;
}
