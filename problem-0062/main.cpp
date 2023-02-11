#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>

int main() {
  std::map<std::string, std::vector<int>> map;

  int n = 0;
  unsigned long long i = 1;
  std::string curr_key;

  while (n < 5) {
    unsigned long long num = i * i * i;
    std::string str = std::to_string(num);
    std::sort(str.begin(), str.end());
    map[str].push_back(i);

    if (map[str].size() > n) {
      n++;
      curr_key = str;
    }

    i++;
  }

  unsigned long long min_cube = 9999999;
  for (auto x : map[curr_key]) min_cube = x < min_cube ? x : min_cube;

  std::cout << min_cube * min_cube * min_cube << std::endl;

  return 0;
}
