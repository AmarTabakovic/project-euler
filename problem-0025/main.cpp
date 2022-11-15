#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

const int N = 1000;

int get_digit_count(boost::multiprecision::cpp_int n) {
  int count = 0;
  while (n >= 1) {
    n /= 10;
    count++;
  }
  return count;
}

int main() {
  int i = 1;
  int highest_digits = 0;
  int highest_digits_ind = 0;

  boost::multiprecision::cpp_int a = 0;
  boost::multiprecision::cpp_int  b = 1;

  while (highest_digits < N) {
    boost::multiprecision::cpp_int temp = a;
    a = b;
    b = temp + a;
    i++;
    
    int len = get_digit_count(b);
    if (len > highest_digits) {
      highest_digits_ind = i;
      highest_digits = len;
    }
  }

  std::cout << highest_digits_ind << std::endl;

  return 0;
}
