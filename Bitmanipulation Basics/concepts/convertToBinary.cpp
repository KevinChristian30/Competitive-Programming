#include <bits/stdc++.h>

using namespace std;

int convertToBinary(int num) {
  int ans = 0;
  int power = 1;

  while (num > 0) {
    int lastBit = num & 1;
    ans += lastBit * power;

    power *= 10;
    num = num >> 1;
  }

  return ans;
}

int main() {
  cout << convertToBinary(10) << endl;
  
  return 0;
}