#include <cmath>
#include <iostream>
#include <map>

const int N = 10'000;

int get_sum_of_divisors(int n) {
  int sum = 0;
  
  for (int i = 1; i <= n / 2; i++)
    if (n % i == 0) sum += i;

  return sum;
}

int main() {
  std::map<int, int> amicable_table;

  for (int i = 1; i < N + 1; i++) amicable_table[i] = get_sum_of_divisors(i);

  int sum = 0;

  for (int i = 1; i < N + 1; i++)
    if (i == amicable_table[amicable_table[i]] && i != amicable_table[i])
      sum += i;

  std::cout << sum << std::endl;

  return 0;
}
