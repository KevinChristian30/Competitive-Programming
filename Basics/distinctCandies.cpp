#include<bits/stdc++.h>
using namespace std;

int distributeCandies(vector<int> candies) {
  set<int> candies_set;

  for (const auto& candy : candies) candies_set.insert(candy);

  return min(candies_set.size(), candies.size() / 2);
}

int main() {
  vector<int> candies = {1, 1, 2, 2, 3, 3};
  cout << distributeCandies(candies) << endl;

  return 0;
}