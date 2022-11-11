#include <cmath>
#include <iostream>
#include <string>

bool is_palindrome(int val) {
  std::string val_str = std::to_string(val);
  for (int i = 0; i < std::floor((val_str.length()) / 2); i++)
    if (val_str.at(i) != val_str.at(val_str.length() - 1 - i)) return false;
  return true;
}

int main() {
  int largest_palindrome = 0;
  for (int i = 0; i < 999; i++) {
    for (int j = 0; j < 999; j++) {
      if (is_palindrome(i * j) && (i * j) > largest_palindrome)
        largest_palindrome = i * j;
    }
  }
  
  std::cout << largest_palindrome << std::endl;
  return 0;
}
