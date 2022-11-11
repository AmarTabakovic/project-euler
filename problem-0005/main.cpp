#include <iostream>

int main() {
  long curr = 1;
  while (true) {
    bool ok = true;
    for (int i = 1; i <= 20; i++) {
      if (curr % i != 0) {
        ok = false;
        break;
      }
    }
    if (ok)
      break;
    else
      curr++;
  }

  std::cout << curr << std::endl;

  return 0;
}
