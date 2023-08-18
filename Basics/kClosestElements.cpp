#include <bits/stdc++.h>

using namespace std;

int distance(const int& a, const int &b) {
  return a - b < 0 ? (a - b) * -1 : a - b;
}

vector<int> findClosestElements(vector<int> arr, int k, int x) {
  deque<int> d;

  int startIndex;
  auto start = find(arr.begin(), arr.end(), x);
  startIndex = start != arr.end() ? start - arr.begin() : -1;

  d.push_front(arr[startIndex]);
  
  int left = startIndex - 1, right = startIndex + 1;
  for (int i = 0; i < k - 1; i++) {
    if (distance(arr[left], x) <= distance(arr[right], x)) {
      d.push_front(arr[left--]);
    } else {
      d.push_back(arr[right++]);
    }
  }

  vector<int> v;
  move(begin(d), end(d), back_inserter(v));
  return v;
}

int main() {
  vector<int> arr = {1, 2, 3, 10, 20};
  int k = 3, x = 3;
  vector<int> results = findClosestElements(arr, k, x);

  for (auto i : results) {
    cout << i << ' ';
  }

  return 0;
}