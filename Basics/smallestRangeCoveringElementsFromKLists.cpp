#include <bits/stdc++.h>
using namespace std;

vector<int> smallestRange(vector<vector<int>> nums) {
  // Todo: LeetCode Hard (I'll Try again someday)
}

int main() {
  vector<vector<int>> nums = {
    {4, 10, 15, 24, 26},
    {0, 9, 12, 20},
    {5, 18, 22, 30}
  };
  vector<int> result = smallestRange(nums);

  for (const auto &num : result) cout << num << ' ';
  
  return 0;
}