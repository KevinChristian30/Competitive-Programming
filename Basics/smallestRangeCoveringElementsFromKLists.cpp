#include <bits/stdc++.h>
using namespace std;

pair<int, int> calculateRangeAndIncrement(vector<vector<int>> nums, int pointers[]) {
  pair<int, int> range = { INT_MAX, INT_MIN };
  int lowerBound;

  for (int i = 0; i < nums.size(); i++) {
    int current = nums[i][pointers[i]];
    if (current < range.first) { 
      range.first = current;
      lowerBound = i;
    }
    if (current > range.second) range.second = current;
  }

  pointers[lowerBound]++;

  return range;
}

vector<int> smallestRange(vector<vector<int>> nums) {
  int pointers[nums.size()] = {0};

  pair<int, int> temp = calculateRangeAndIncrement(nums, pointers);
  vector<int> ans = { temp.first, temp.second };

  while (true) {
    bool isFinished = false;
    for (int i = 0; i < nums.size(); i++) {
      if (pointers[i] >= nums[i].size()) {
        isFinished = true;
        break;
      }
    }

    if (isFinished) break;

    pair<int, int> temp = calculateRangeAndIncrement(nums, pointers);
    if (temp.second - temp.first < ans[1] - ans[0]) {
      ans[0] = temp.first;
      ans[1] = temp.second;
    }
  }

  return ans;
} 

int main() {
  vector<vector<int>> nums = {
    {4, 10, 15, 24, 26},
    {0, 9, 12, 20},
    {5, 18, 22, 30}
  };

  vector<int> result = smallestRange(nums);
  for (const auto& num : result) {
    cout << num << ' ';
  }
  
  return 0;
}