#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int find(vector<int> arr, int toFind) {
  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] == toFind) return i;
  }

  return -1;
}

int distance(const int &a, const int &b) {
  return abs(abs(a) - abs(b));
}

vector<int> findClosestElements(vector<int> arr, int k, int x) {
  int index = find(arr, x);

  if (index == -1) return vector<int> ();

  int left = index - 1, right = index + 1;
  for (int i = 0; i < k - 1; i++) {
    if (left <= -1) {
      if (right <= arr.size()) right++;
      else break;
    } else if (right > arr.size()) {
      if (left > -1) left--;
      else break;
    }
    distance(arr[left], x) <= distance(arr[right], x) ? left-- : right++; 
  }

  vector<int> result;
  for (int i = left + 1; i < right; i++) {
    result.push_back(arr[i]);
  }

  return result;
}

int main() {
  vector<int> arr = {1, 2, 3, 4, 5};
  int k = 4, x = 3;

  vector<int> res = findClosestElements(arr, k, x);

  for (const auto& i : res) {
    cout << i << endl;
  }
  
  return 0;
}