#include <bits/stdc++.h>

using namespace std;

void findSubsequences(string str) {
  int length = (1 << str.length());

  for (int i = 0; i < length; i++) {
    string substr = "";
    
    int temp = i, j = 0;
    while (temp > 0) {
      if (temp & 1) substr += str[j];
      j++;
      temp = temp >> 1;
    }

    cout << substr << endl;
  }
}

int main() {
  findSubsequences("abcd");

  return 0;
}