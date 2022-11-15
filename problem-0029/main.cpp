#include <iostream>
#include <set>
#include <cmath>
#include <boost/multiprecision/cpp_int.hpp>

const int N = 100;

int main() {
  std::set<boost::multiprecision::cpp_int> set;

  for (int i = 2; i <= N; i++) {
    for (int j = 2; j <= N; j++) {
      set.insert(boost::multiprecision::pow(boost::multiprecision::cpp_int(i), j));
    }
  }

  std::cout << set.size() << std::endl;

  return 0;
}
