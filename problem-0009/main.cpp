#include <cmath>
#include <iostream>

int main() {
  bool found = false;
  int result = 0;

  for (int i = 0; i < 500 && !found; i++) {
    for (int j = i; j < 500 && !found; j++) {
      auto c_squared = i * i + j * j;
      auto c = std::sqrt(c_squared);
      if (i + j + c == 1000) {
        found = true;
        result = i * j * c;
      }
    }
  }

  std::cout << result << std::endl;

  return 0;
}
