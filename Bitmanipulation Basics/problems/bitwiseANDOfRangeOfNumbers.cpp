#include <bits/stdc++.h>

using namespace std;

int rangeBitwiseAnd(int left, int right) {
  int result = left;
  
  for (int i = left + 1; i <= right; i++) result &= i;

  return result;
}

int main() {
  cout << rangeBitwiseAnd(5, 7) << endl;

  return 0;
}