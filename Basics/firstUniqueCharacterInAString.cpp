#include <bits/stdc++.h>

using namespace std;

int firstUniqChar(string s) {
  int count[200] = {0};

  for (int i = 0; i < s.length(); i++) count[s[i]]++;

  for (int i = 0; i < s.length(); i++) if (count[s[i]] == 1) return i;

  return -1;
}

int main() {
  cout << firstUniqChar("codingminutes") << endl;
  cout << firstUniqChar("aabb") << endl;

  return 0;
}