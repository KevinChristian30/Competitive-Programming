#include <bits/stdc++.h>

using namespace std;

int solve(vector<int> nums) {
  priority_queue<int, vector<int>, greater<int>> pq;
  for (int i : nums) pq.push(i);

  int cost = 0, localCost;

  while (pq.size() > 1) {
    localCost = 0;
    localCost += pq.top();
    pq.pop();

    localCost += pq.top();
    pq.pop();

    cost += localCost;
    pq.push(localCost);
  }

  return cost;
}

int main() {
  vector<int> nums = {1, 2, 3, 4, 5};

  cout << solve(nums) << endl;
}