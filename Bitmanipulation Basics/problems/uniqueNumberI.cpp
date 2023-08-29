#include <bits/stdc++.h>

using namespace std;

int solve(vector<int> nums) {
  int result = nums[0];
  for (int i = 1; i < nums.size(); i++) {
    result ^= nums[i];
  }

  return result;
}

int main() {
  vector<int> nums = {1, 2, 3, 2, 1};
  cout << solve(nums) << endl;

  return 0;
}