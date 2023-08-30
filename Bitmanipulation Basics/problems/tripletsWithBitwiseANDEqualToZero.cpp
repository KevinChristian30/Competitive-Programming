#include <bits/stdc++.h>

using namespace std;

int countTriplets(vector<int> nums) {
  int count = 0;
  
  for (const auto& i : nums) {
    for (const auto& j : nums) {
      for (const auto& k : nums) {
        if ((i & j & k) == 0) count++;
      }
    }
  }
  
  return count;
}

int main() {
  vector<int> nums = {2, 1, 3};
  cout << countTriplets(nums) << endl;

  return 0;
}