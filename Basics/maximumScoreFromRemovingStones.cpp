#include <bits/stdc++.h>

using namespace std;

int maximumScore(int a, int b, int c) {
  vector<int> nums = {a, b, c};

  int count = 0, countZeros;
  while (true) {
    sort(nums.begin(), nums.end());

    countZeros = 0;
    for (int i = 0; i < 3; i++) if (nums.at(i) == 0) countZeros++;
    if (countZeros >= 2) break;

    nums[countZeros]--;
    nums[2]--;
    count++;
  }

  return count;
}

int main() {
  cout << maximumScore(2, 4, 6) << endl;
  
  return 0;
}