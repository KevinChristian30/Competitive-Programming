#include <bits/stdc++.h>

using namespace std;

int countSetBits(int num) {
  int count = 0;

  for (; num > 0; num = num >> 1) count += (num & 1);

  return count;
}

int countSetBitsFastMethod(int num) {
  int ans = 0;
  
  while (num > 0) {
    num = num & (num - 1);
    ans++;
  }

  return ans;
}

int main() {
  cout << countSetBits(15) << endl;

  return 0;
}