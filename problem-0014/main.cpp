#include <iostream>

const int MAX = 1'000'000;

int steps_of_collatz(unsigned long val, bool (&visited)[MAX]) {
  int ret = 0;
  while (val != 1) {
    if (val % 2 == 0)
      val /= 2;
    else
      val = (val * 3) + 1;

    if (val < MAX) visited[val] = true;

    ret++;
  }
  return ret;
}

int main() {
  /**
   * Minor performance boost by avoiding numbers that were already
   * visited previously as an intermediate step.
   */
  bool visited[MAX];
  for (int i = 1; i <= MAX; i++) {
    visited[i] = false;
  }

  int longest_steps = 0;
  int longest_seq = 0;
  int i = 1;

  while (i < MAX) {
    if (!visited[i]) {
      int steps = steps_of_collatz(i, visited);
      if (steps > longest_steps) {
        longest_steps = steps;
        longest_seq = i;
      }
    }
    i++;
  }

  std::cout << longest_seq << std::endl;

  return 0;
}
