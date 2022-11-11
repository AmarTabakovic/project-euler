#include <fstream>
#include <iostream>
#include <streambuf>
#include <string>

int main() {
  std::ifstream t("num.txt");
  std::string num((std::istreambuf_iterator<char>(t)),
                  std::istreambuf_iterator<char>());

  long largest_product = 1;
  int mul_size = 13;

  for (int i = 0; i < num.size() - (mul_size + 1); i++) {
    long product = 1;
    for (int j = i; j < i + mul_size; j++) {
      if (num[j] == '0') {
        i = j + 1;
        product = 1;
        break;
      }
      product *= num[j] - '0';
    }

    if (product > largest_product) largest_product = product;
  }

  std::cout << largest_product << std::endl;
  return 0;
}
