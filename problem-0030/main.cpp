#include <iostream>
#include <cmath>
#include <string>

const int N = 5;

int main() {
  int sum = 0;

  int bounds = std::pow(9, N) * N;

  for (int i = 2; i <= bounds; i++) {
    int x = 0;
    std::string str = std::to_string(i);
    for (auto &c : str)
      x += std::pow((c - '0'), N);
    
    if (x == i) sum += i;

  }
  std::cout << sum << std::endl;
  return 0;
}
