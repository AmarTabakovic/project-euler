#include <fstream>
#include <iostream>
#include <string>

int main() {
  std::string line;
  std::ifstream myfile("numbers.txt");

  long long sum = 0;

  if (myfile.is_open()) {
    while (getline(myfile, line)) {
      sum += std::stoull(line.substr(0, 15));
    }
    myfile.close();
  }

  std::cout << std::to_string(sum).substr(0,10) << std::endl;

  return 0;
}
