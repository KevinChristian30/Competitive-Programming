#include <bits/stdc++.h>

using namespace std;

void clearIthBit(int &num, int i) {
  int mask = ~(1 << i);
  num = num & mask;
}

void updateIthBit(int &num, int i, int value) {
  clearIthBit(num, i);
  int mask = value << i;

  num = num | mask;
}

int main() {
  int num = 10;
  cout << "Old: " << num << endl;
  
  updateIthBit(num, 1, 0);
  cout << "New: " << num << endl;

  return 0;
}