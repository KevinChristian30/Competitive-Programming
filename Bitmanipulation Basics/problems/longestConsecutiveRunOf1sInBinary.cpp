#include <bits/stdc++.h>

using namespace std;

int solve(int n) {
  int res = 0;
  while (n > 0) {
    res++;
    n &= n << 1;
  }

  return res;
}

int main() {
  cout << solve(156) << endl;

  return 0;
}