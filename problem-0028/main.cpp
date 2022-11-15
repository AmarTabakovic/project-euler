#include <iostream>
#include <vector>

const int N = 1001;

int main() {

  int center = (int) (N / 2);
  int curr_x = center;
  int curr_y = center;

  int curr_direction = 0;
  int curr_step = 0;
  int n_turns = 0;
  int n_steps = 1;
  int i = 1;

  std::vector<int> vec;

  while (i <= N * N) {
    if (curr_y == curr_x || N - curr_y - 1 == curr_x || N - curr_x - 1 == curr_y)
      vec.push_back(i);
    curr_step++;

    if (curr_direction == 0) curr_x++;
    if (curr_direction == 1) curr_y++;
    if (curr_direction == 2) curr_x--;
    if (curr_direction == 3) curr_y--;

    if (n_turns == 2) {
      n_steps++;
      n_turns = 0;
    }
    if (curr_step == n_steps) {
      curr_direction = (curr_direction + 1) % 4;
      n_turns++;
      curr_step = 0;
    }
    i++;
  }

  int sum = 0;

  for (auto &val : vec)
    sum += val;

  std::cout << sum << std::endl;
  return 0;
}
