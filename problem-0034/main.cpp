#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>
#include <string>

const int N = 100000;

int main() {
  int fac_table[10];

  fac_table[0] = 1;
  for (int i = 1; i <= 9; i++) fac_table[i] = fac_table[i - 1] * i;

  int sum = 0;

  for (int i = 3; i < N; i++) {
    boost::multiprecision::cpp_int fac_sum;

    for (const auto &c : std::to_string(i)) fac_sum += fac_table[c - '0'];

    if (fac_sum == i) sum += i;
  }

  std::cout << sum << std::endl;

  return 0;
}
