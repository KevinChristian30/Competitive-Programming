#include <bits/stdc++.h>

using namespace std;

int hammingDistance(int x, int y) {
  int difference = x ^ y;
  
  int result = 0;
  while (difference > 0) {
    result += difference & 1;
    difference = difference >> 1;
  }

  return result;
}

int main() {
  cout << hammingDistance(1, 4) << endl;
  
  return 0;
}