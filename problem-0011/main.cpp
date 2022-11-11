#include <fstream>
#include <iostream>
#include <string>

int main() {
  int grid[20][20];

  for (int i = 0; i < 20; i++) {
    for (int j = 0; j < 20; j++) {
      grid[i][j] = 0;
    }
  }

  std::string line;
  std::ifstream myfile("grid.txt");
  std::string delim = " ";

  /**
   * Sources:
   *  - https://cplusplus.com/doc/tutorial/files/
   *  -
   * https://stackoverflow.com/questions/14265581/parse-split-a-string-in-c-using-string-delimiter-standard-c
   */
  if (myfile.is_open()) {
    int i = 0;
    while (getline(myfile, line)) {
      auto start = 0U;
      auto end = line.find(delim);
      int j = 0;
      while (end != std::string::npos) {
        grid[i][j] = std::stoi(line.substr(start, end - start));

        start = end + delim.length();
        end = line.find(delim, start);
        j++;
      }
      grid[i][j] = std::stoi(line.substr(start, end));
      i++;
    }
    myfile.close();
  }

  int greatest_prod = 0;

  for (int i = 0; i < 17; i++) {
    for (int j = 0; j < 17; j++) {
      int prod_horiz =
          grid[i][j] * grid[i][j + 1] * grid[i][j + 2] * grid[i][j + 3];
      int prod_vert =
          grid[i][j] * grid[i + 1][j] * grid[i + 2][j] * grid[i + 3][j];
      int prod_tl_br = grid[i][j] * grid[i + 1][j + 1] * grid[i + 2][j + 2] *
                       grid[i + 3][j + 3];
      int prod_bl_tr = grid[i + 3][j] * grid[i + 2][j + 1] *
                       grid[i + 1][j + 2] * grid[i][j + 3];

      greatest_prod = std::max(
          {prod_vert, prod_horiz, prod_tl_br, prod_bl_tr, greatest_prod});
    }
  }

  std::cout << greatest_prod << std::endl;

  return 0;
}
