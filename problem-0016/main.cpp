#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>
#include <string>

int main() {
  boost::multiprecision::cpp_int num =
      boost::multiprecision::pow(boost::multiprecision::cpp_int(2), 1000);
  std::string num_str = num.str();
  
  int sum = 0;
  for (int i = 0; i < num_str.length(); i++) sum += num_str[i] - '0';

  std::cout << sum << std::endl;

  return 0;
}
