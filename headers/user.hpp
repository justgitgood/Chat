#ifndef USER_HPP
#define USER_HPP

#include <fstream>
#include <iostream>

// Client Data
class client_data {
public:
  void set_client_name(std::string client_name);
  std::string &getclient_name() { return client_name; }

private:
  std::string client_name;
};

// Client Data File
class client_data_file {
public:
  std::ofstream client_profile();
  void checkfile();

private:
};
#endif // USER_HPP
