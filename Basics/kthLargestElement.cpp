#include <bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;

int findKthLargest(vector<int> nums, int k) {
  sort(nums.rbegin(), nums.rend());

  return nums.at(k - 1);
}


int main() {
  vector<int> nums{ 3, 2, 3, 1, 2, 4, 5, 5, 6 };

  cout << findKthLargest(nums, 4) << endl;

  return 0;
}