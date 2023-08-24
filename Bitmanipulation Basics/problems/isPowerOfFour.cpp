#include <bits/stdc++.h>

using namespace std;

bool isPowerOfTwo(int n) {
  return (n & (n - 1)) == 0;
}

bool isPowerOfFour(int n) {
  return isPowerOfTwo(n) && isPowerOfTwo(sqrt(n));
}

int main() {
  cout << isPowerOfFour(16) << endl;
  cout << isPowerOfFour(5) << endl;

  return 0;
}