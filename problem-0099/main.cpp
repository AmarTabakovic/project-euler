#include <cmath>
#include <cstdio>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

struct entry {
  int idx;
  int base;
  int exp;
};

bool compare(entry e1, entry e2) {
  return (e1.exp * std::log10(e1.base) < e2.exp * std::log10(e2.base));
}

int main() {
  std::ifstream is("p099_base_exp.txt");
  std::string str;
  std::vector<entry> vec;

  int i = 1;
  while (std::getline(is, str)) {
    entry e;
    e.idx = i;
    std::sscanf(str.c_str(), "%d,%d\n", &e.base, &e.exp);
    vec.push_back(e);
    i++;
  }

  auto it = std::max_element(vec.begin(), vec.end(), compare);

  std::cout << it->idx << std::endl;

  return 0;
}
