#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> arr(n, 0);

  for (int i = 0; i < n; i++) arr[i] = n - i;

  auto startTime = clock();
  sort(arr.begin(), arr.end());
  auto endTime = clock();

  cout << startTime << endl;
  cout << endTime << endl;
  cout << endTime - startTime << endl;

  return 0;
}