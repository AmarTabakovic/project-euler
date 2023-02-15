#include <array>
#include <fstream>
#include <iostream>
#include <vector>

bool check_safe(std::array<std::array<int, 9>, 9> &sudoku, int x, int y,
                int val) {
  /** Check line. */
  for (int i = 0; i < 9; i++)
    if (sudoku[y][i] == val) return false;

  /** Check column. */
  for (int i = 0; i < 9; i++)
    if (sudoku[i][x] == val) return false;

  /** Check 3x3 matrix. */
  int i_min = (y / 3) * 3;
  int j_min = (x / 3) * 3;

  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
      if (sudoku[i_min + i][j_min + j] == val) return false;

  return true;
}

bool solve(std::array<std::array<int, 9>, 9> &sudoku, int x, int y) {
  if (y == 8 && x == 9) return true;

  if (x == 9) {
    y++;
    x = 0;
  }

  if (sudoku[y][x] > 0) return solve(sudoku, x + 1, y);

  for (int i = 1; i <= 9; i++) {
    if (check_safe(sudoku, x, y, i)) {
      sudoku[y][x] = i;

      if (solve(sudoku, x + 1, y)) return true;
    }

    sudoku[y][x] = 0;
  }

  return false;
}

void parse_sudokus(std::vector<std::array<std::array<int, 9>, 9>> &sudokus) {
  std::ifstream is("p096_sudoku.txt");
  std::string str;

  int i = 0;
  int y = 0;
  std::array<std::array<int, 9>, 9> current_sudoku;
  while (std::getline(is, str)) {
    if (i == 0) {
      i++;
      continue;
    }

    if (i % 10 == 0) {
      y = 0;
      i++;
      sudokus.push_back(current_sudoku);
      continue;
    }

    for (int x = 0; x < 9; x++) current_sudoku[y][x] = str[x] - '0';

    y++;
    i++;
  }
}

int triplet_to_int(int i1, int i2, int i3) { return i1 * 100 + i2 * 10 + i3; }

int main() {
  std::vector<std::array<std::array<int, 9>, 9>> sudokus;
  parse_sudokus(sudokus);

  for (auto &s : sudokus) solve(s, 0, 0);

  int sum = 0;
  for (auto s : sudokus) sum += triplet_to_int(s[0][0], s[0][1], s[0][2]);

  std::cout << sum << std::endl;

  return 0;
}
