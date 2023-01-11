#include <iostream>
#include <string>

bool check(unsigned long long num) {
  std::string num_str = std::to_string(num);

  for (int i = 1; i < 10; i++)
    if (num_str[(i - 1) * 2] != '0' + i) return false;

  if (num_str[18] != '0') return false;
  return true;
}

int main() {
  /**
   * Lower bound: sqrt(1020304050607080900)
   * Upper bound: sqrt(1929394959697989990)
   *
   * Number ends with zero, we can increment by 10 each iteration.
   */
  for (unsigned long long i = 1010101010; i < 1389026623; i += 10) {
    if (check(i * i)) {
      std::cout << (i) << std::endl;
      break;
    }
  }

  return 0;
}
