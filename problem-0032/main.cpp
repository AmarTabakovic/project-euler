#include <iostream>
#include <map>
#include <set>
#include <string>

int main() {
  std::set<int> solution_set;

  int sum = 0;

  for (int i = 1; i <= 100; i++) {
    for (int j = 1; j <= 3000; j++) {
      std::string str =
          std::to_string(i) + std::to_string(j) + std::to_string(i * j);

      bool checked[10];

      for (int k = 1; k <= 9; k++) checked[k] = false;

      bool should_continue = false;

      for (const auto &c : str) {
        if (checked[c - '0'] || (c - '0') == 0) {
          should_continue = true;
          break;
        }
        checked[c - '0'] = true;
      }

      if (should_continue) continue;

      for (int k = 1; k <= 9; k++) {
        if (!checked[k]) {
          should_continue = true;
          break;
        }
      }

      if (should_continue) continue;

      solution_set.insert(i * j);
    }
  }

  for (const auto &s : solution_set) sum += s;

  std::cout << sum << std::endl;

  return 0;
}