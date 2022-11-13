#include <cmath>
#include <iostream>

const int N = 10'000;

int get_sum_of_divisors(int n) {
  int sum = 0;

  for (int i = 1; i <= n / 2; i++)
    if (n % i == 0) sum += i;

  return sum;
}

int main() {
  int sum = 0;

  for (int i = 1; i < N + 1; i++){
    int b = get_sum_of_divisors(i);
    if (i == get_sum_of_divisors(b) && i != b) sum += i;
  }

  std::cout << sum << std::endl;

  return 0;
}
