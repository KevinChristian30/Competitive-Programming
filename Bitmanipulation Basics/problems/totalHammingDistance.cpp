#include <bits/stdc++.h>

using namespace std;

int calculateHammingDistance(const int& a, const int& b) {
  int mask = a ^ b;

  int hammingDistance = 0;
  while (mask > 0) {
    hammingDistance += mask & 1;
    mask = mask >> 1;
  }

  return hammingDistance;
}

int totalHammingDistance(vector<int> nums) {
  int count = 0;

  for (int i = 0; i < nums.size(); i++) {
    for (int j = i; j < nums.size(); j++) {
      count += calculateHammingDistance(nums[i], nums[j]);
    }
  }

  return count;
}

int main() {
  vector<int> nums = {4, 14, 2};
  cout << totalHammingDistance(nums) << endl;

  return 0;
}