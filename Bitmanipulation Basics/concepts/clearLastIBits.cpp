#include <bits/stdc++.h>

using namespace std;

void clearLastIBits(int &num, int i) {
  int mask = (~0) << i;
  num = num & mask;
}

int main() {
  int num = 15;
  cout << "Old: " << num << endl;
  
  clearLastIBits(num, 2);
  cout << "New: " << num << endl;

  return 0;
}