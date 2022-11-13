#include <fstream>
#include <iostream>
#include <vector>

int main() {
  std::vector<std::string> names;

  std::string line;
  std::ifstream myfile("names.txt");
  std::string delim = ",";

  if (myfile.is_open()) {
    while (getline(myfile, line)) {
      auto start = 0U;
      auto end = line.find(delim);
      std::string name;
      while (end != std::string::npos) {
        name = line.substr(start, end - start);
        name.erase(std::remove(name.begin(), name.end(), '\"'), name.end());
        names.push_back(name);

        start = end + delim.length();
        end = line.find(delim, start);
      }
      name = line.substr(start, end);
      name.erase(std::remove(name.begin(), name.end(), '\"'), name.end());
      names.push_back(name);
    }
    myfile.close();
  }

  std::sort(names.begin(), names.end());

  long long total = 0;
  for (int i = 0; i < names.size(); i++) {
    int char_sum = 0;
    for (auto &ch : names[i]) char_sum += ch - 'A' + 1;
    total += char_sum * (i + 1);
  }

  std::cout << total << std::endl;

  return 0;
}
