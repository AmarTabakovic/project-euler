#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>

/**
 * General ideas
 * - Iterate through cubes
 * - Order string representation of cube numerically (12...89)
 * - Hashmap of ordered string cubes
 * - Look for same until 5 found
 */

struct entry {
  std::string cube;
  std::vector<int> nums;
};

bool compare(std::pair<std::string, int> p1, std::pair<std::string, int> p2) {
  return p1.second < p2.second;
}

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
