//
// Created by zhoubing on 2022/10/4.
//
#include <boost/asio.hpp>
#include <iostream>

using namespace boost;

int main() {
    std::string raw_ip_address = "127.0.0.1";
    unsigned short port = 3333;
    system::error_code ec;
    asio::ip::address ip_address = asio::ip::address::from_string(raw_ip_address, ec);

    if (ec.value() != 0) {
        std::cout << "error!!!" << std::endl;
        return ec.value();
    }

    std::cout << "right!!!" << std::endl;
    asio::ip::tcp::endpoint ep(ip_address, port);
    return 0;
};