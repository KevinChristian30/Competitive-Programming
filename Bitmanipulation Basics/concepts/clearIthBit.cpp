#include <bits/stdc++.h>

using namespace std;

void clearIthBit(int &num, int i) {
  int mask = ~(1 << i);
  num = num & mask;
}

int main() {
  int num = 10;
  cout << "Old: " << num << endl;

  clearIthBit(num, 3);
  cout << "New: " << num << endl;

  return 0;
}