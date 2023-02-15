#include <iostream>
#include <cmath>

int main() {
  int n = 0;
  int acc = 0;
  int largest_n_factors = 0;
  int result = 0;
  while (largest_n_factors < 500) {
    acc += n;
    n++;
    int factors = 0;
    for (int i = 1; i * i <= acc; i++) {
      if (acc % i == 0) {
        if (acc / i == i)
          factors++;
        else
          factors += 2;
      }
    }

    if (factors > largest_n_factors) {
      largest_n_factors = factors;
      result = acc;
    }
  }

  std::cout << result << std::endl;
  return 0;
}
