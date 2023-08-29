#include <bits/stdc++.h>

using namespace std;

void updateSum(vector<int>& sum, int num) {
  for (int i = 0; i < 32; i++, num = num >> 1) {
    if (num & 1) sum[i]++;
  }
}

int solve(vector<int> nums) {
  vector<int> sum(32, 0);

  for (int num : nums) updateSum(sum, num);

  int result = 0;
  for (int i = 0; i < sum.size(); i++) { 
    sum[i] %= 3;
    result += sum[i] * (1 << i);
  }

  return result;
}

int main() {
  vector<int> nums = {1, 3, 5, 4, 3, 1, 5, 5, 3, 1};
  cout << solve(nums) << endl;

  return 0;
}