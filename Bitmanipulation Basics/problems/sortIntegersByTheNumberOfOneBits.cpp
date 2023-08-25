#include <bits/stdc++.h>

using namespace std;

int countBits(int num) {
  int count = 0;
  
  for (; num > 0; num = num >> 1) count += num & 1;

  return count;
}
 
vector<int> sortByBits(vector<int> arr) {
  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

  for (const auto& num : arr) {
    pq.push(make_pair(countBits(num), num));
  }

  vector<int> res;
  int size = pq.size();
  for (int i = 0; i < size; i++) {
    res.push_back(pq.top().second);
    pq.pop();
  }

  return res;
}

int main() {
  vector<int> arr = {0, 1, 2, 3, 4, 5, 6, 7, 8};
  vector<int> res = sortByBits(arr);

  for (const auto& num : res) {
    cout << num << ' ';
  }

  return 0;
}