#include <bits/stdc++.h>

using namespace std;

bool isPowerOfTwo(int n) {
  return (n & (n - 1)) == 0;
}

int main() {
  for (int i = 0; i <= 100; i++) {
    if (isPowerOfTwo(i)) {
      cout << i << ' ';
    }
  }

  return 0;
}