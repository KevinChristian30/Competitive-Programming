#include <bits/stdc++.h>

using namespace std;

int difference(const int &a, const int &b) {
  return abs(a - b);
}

int findNearestElement(vector<int> arr, int toFind) {
  int diff = INT_MAX, resultIndex = -1;

  for (int i = 0; i < arr.size(); i++) {
    int temp = difference(arr[i], toFind);
    if (temp < diff) {
      diff = temp;
      resultIndex = i;
    }
  }

  return resultIndex;
}

vector<int> smallestRange(vector<vector<int>> nums) {
  int numberOfArrays = nums.size();

  int left = 0, right = INT_MAX;
  
  for (int i = 0; i < nums[0].size(); i++) {
    vector<int> temp;
    temp.push_back(nums[0][i]);

    for (int j = 1; j < numberOfArrays; j++) {
      int nearestElementIndex, minimumDifference = INT_MAX;

      for (int k = 0; k < temp.size(); k++) {
        int tempNearestElementIndex = findNearestElement(nums[j], temp[k]);

        vector<int> innerTemp(temp);
        innerTemp.push_back(nums[j][tempNearestElementIndex]);
        sort(innerTemp.begin(), innerTemp.end());

        int diff = difference(innerTemp[0], innerTemp[temp.size() - 1]);
        if (diff < minimumDifference) {
          minimumDifference = diff;
          nearestElementIndex = tempNearestElementIndex;
        }
      }

      temp.push_back(nums[j][nearestElementIndex]);
    }

    sort(temp.begin(), temp.end());

    if (difference(temp[0], temp[temp.size() - 1]) <= difference(right, left)) {
      left = temp[0];
      right = temp[temp.size() - 1];
    }
  } 
  
  return vector<int>() = {left, right};
}

int main() {
  vector<vector<int>> nums = {
    {4, 10, 15, 24, 26},
    {0, 9, 12, 20},
    {5, 18, 22, 30}
  };
  vector<int> result = smallestRange(nums);

  for (const auto &num : result) cout << num << ' ';
  
  return 0;
}