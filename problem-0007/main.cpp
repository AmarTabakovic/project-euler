#include <cmath>
#include <iostream>

bool is_prime(long val) {
  for (long i = 2; i * i <= val; i++)
    if (val % i == 0) 
      return false;

  return true;
}

int main() {
  long current = 1;
  long index = 1;

  while (index <= 10001) {
    current++;
    if (is_prime(current)) {
      index++;
    }
  }

  std::cout << current << std::endl;

  return 0;
}
