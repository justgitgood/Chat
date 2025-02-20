#include "../headers/user.hpp"

void client_data::set_client_name(std::string client_name) {
  std::cout << "What would you like your username to be?" << '\n';
  std::cin >> client_name;
}

void client_data_file::checkfile() {
  client_data c_client_data;
  std::ofstream client_profile("user.txt");
  client_profile << c_client_data.getclient_name() << '\n';
  client_profile.close();
}
