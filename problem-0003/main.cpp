#include <cmath>
#include <iostream>

bool is_prime(long val) {
  for (long i = 2; i < std::ceil(std::sqrt(val)); i++)
    if (val % i == 0) return false;

  return true;
}

int main() {
  long num = 600851475143;
  long largest_prime_factor = 2;
  for (long i = 2; i < std::ceil(std::sqrt(num)); i++)
    if (is_prime(i) && num % i == 0 && i > largest_prime_factor)
      largest_prime_factor = i;

  std::cout << largest_prime_factor << std::endl;

  return 0;
}
