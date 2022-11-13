#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>

int main() {
  boost::multiprecision::cpp_int num = 1;
  for (int i = 1; i <= 100; i++) num *= i;

  std::string num_str = num.str();
  int sum = 0;
  for (int i = 0; i < num_str.size(); i++) sum += num_str[i] - '0';

  std::cout << sum << std::endl;

  return 0;
}
