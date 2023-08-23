#include <bits/stdc++.h>

using namespace std;

bool isOdd(int num) {
  return num & 1 == 1;
}

int main() {
  if (isOdd(5)) cout << "Odd" << endl;
  else cout << "Even" << endl;

  return 0;
}