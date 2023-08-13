#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

void print(const array<int, 6>& arr) {
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }

  cout << endl;
}

int main() {
  array<int, 6> arr = {6, 5, 4, 3, 2, 1};
  arr[1] = 20;
  print(arr);

  sort(arr.begin(), arr.end());
  print(arr);

  arr.fill(5);
  print(arr);

  for (int &e : arr) {
    e += 2;
  }
  print(arr);

  return 0;
}