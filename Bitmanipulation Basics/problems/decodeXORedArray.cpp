#include <bits/stdc++.h>

using namespace std;

vector<int> decode(vector<int> encoded, int first) {
  vector<int> res = { first };
  encoded[0] = first ^ encoded[0];
  res.push_back(encoded[0]);

  for (int i = 1; i < encoded.size(); i++) {
    encoded[i] = encoded[i - 1] ^ encoded[i];
    res.push_back(encoded[i]);
  }

  return res;
}

int main() {
  vector<int> arr = { 1, 2, 3 };
  int first = 1;

  vector<int> res = decode(arr, first);
  for (const auto& num : res) cout << num << ' ';

  return 0;
}