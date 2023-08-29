#include <bits/stdc++.h>

using namespace std;

int findFirstSetBit(int num) {
  int counter = 0;
  while (true) {
    if (num & 1) break;
    counter++;
    num = num >> 1;
  }

  return counter;
}

vector<int> solve(vector<int> nums) {
  vector<int> result;
  
  int mask = nums[0];
  for (int i = 1; i < nums.size(); i++) mask ^= nums[i];
  
  int firstSetBit = findFirstSetBit(mask);
  vector<int> temp;
  for (const auto& num : nums) {
    if ((num & (1 << firstSetBit)) == 1) temp.push_back(num);
  }

  int secondMask = temp[0];
  for (int i = 1; i < temp.size(); i++) secondMask ^= temp[i];

  result.push_back(secondMask);
  result.push_back(secondMask ^ mask);

  return result;
}

int main() {
  vector<int> nums = {1, 3, 5, 4, 3, 1, 5, 7};
  vector<int> res = solve(nums);

  for (const auto& num : res) {
    cout << num << ' ';
  }

  return 0;
}