#include <iostream>

long sum_of_squares(int n) {
  long sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += i * i;
  }
  return sum;
}

long square_of_sums(int n) {
  long sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += i;
  }
  return sum * sum;
}

int main() { 
  long diff =  square_of_sums(100) - sum_of_squares(100);

  std::cout << diff << std::endl;

  return 0; 
  }
