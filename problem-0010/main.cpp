#include <iostream>

bool is_prime(long val) {
  for (long i = 2; i * i <= val; i++)
    if (val % i == 0) return false;

  return true;
}

int main() {
  long largest_prime = 0;
  long current = 2;
  long sum = 0;
  while (largest_prime < 2'000'000) {
    if (is_prime(current)) {
      sum += current;
      largest_prime = current;
    }
    current++;
  }

  std::cout << sum - largest_prime << std::endl;

  return 0;
}
