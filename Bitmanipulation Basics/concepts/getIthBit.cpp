#include <bits/stdc++.h>

using namespace std;

int getIthBit(int num, int i) {
  int mask = 1 << i;
  return (num & mask) == 0 ? 0 : 1;
}

int main() {
  cout << getIthBit(10, 0) << endl;
  cout << getIthBit(10, 1) << endl;
  cout << getIthBit(10, 2) << endl;
  cout << getIthBit(10, 3) << endl;
  cout << getIthBit(10, 4) << endl;
  cout << getIthBit(10, 5) << endl;
  cout << getIthBit(10, 6) << endl;
  cout << getIthBit(10, 7) << endl;

  return 0;
}