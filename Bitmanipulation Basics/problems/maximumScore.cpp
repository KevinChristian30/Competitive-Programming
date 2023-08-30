#include <bits/stdc++.h>

using namespace std;

int countValue(vector<vector<int>> grid) {
  int result = 0;

  for (int i = 0; i < grid.size(); i++) {
    int rowValue = 0;

    for (int j = 0; j < grid[i].size(); j++) {
      rowValue += grid[i][j] * (1 << (grid[i].size() - j - 1));
    }

    result += rowValue;
  }

  return result;
}

void flipColumn(vector<vector<int>>& grid, int colIndex) {
  for (int i = 0; i < grid.size(); i++) {
    grid[i][colIndex] = grid[i][colIndex] ? 0 : 1;
  }
}

void flipRow(vector<vector<int>>& grid, int rowIndex) {
  for (int i = 0; i < grid[rowIndex].size(); i++) {
    grid[rowIndex][i] = grid[rowIndex][i] ? 0 : 1;
  }
}

void printGrid(vector<vector<int>> grid) {
  for (const auto& vec : grid) {
    for (const auto& num : vec) {
      cout << num << ' ';
    }
    
    cout << endl;
  }
}

int matrixScore(vector<vector<int>> grid) {
  for (int i = 0; i < grid.size(); i++) {
    if (grid[i][0] == 0) flipRow(grid, i);
  }

  for (int i = 0; i < grid[0].size(); i++) {
    int countOne = 0;
  
    for (int j = 0; j < grid.size(); j++) {
      countOne += grid[j][i];
    }

    if (countOne < grid.size() - countOne) {
      flipColumn(grid, i);
    }
  }

  return countValue(grid);
}

int main() {
  vector<vector<int>> grid = {
    {0, 0, 1, 1},
    {1, 0, 1, 0},
    {1, 1, 0, 0}
  };

  cout << matrixScore(grid) << endl;

  return 0;
}