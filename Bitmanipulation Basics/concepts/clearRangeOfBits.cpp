#include <bits/stdc++.h>

using namespace std;

void clearRangeOfBits(int &num, int start, int end) {
  int maskLeft = (~0) << (end + 1);
  int maskRight = (1 << start) - 1;
  
  int mask = maskLeft | maskRight;
  num = num & mask;
}

int main() {
  int num = 31;
  cout << "Old: " << num << endl;
  
  clearRangeOfBits(num, 1, 3);
  cout << "New: " << num << endl;

  return 0;
}