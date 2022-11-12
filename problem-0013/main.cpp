#include <fstream>
#include <iostream>
#include <string>
#include <boost/multiprecision/cpp_int.hpp>

int main() {
  std::string line;
  std::ifstream myfile("numbers.txt");

  boost::multiprecision::uint512_t sum = 0;

  if (myfile.is_open()) {
    while (getline(myfile, line)) {
      boost::multiprecision::uint512_t val(line); 
      sum += val;
    }
    myfile.close();
  }

  std::cout << sum.str().substr(0,10) << std::endl;

  return 0;
}
