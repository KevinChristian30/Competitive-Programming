#include <bits/stdc++.h>

using namespace std;

/*

You are given two 32-bit numbers, N and M, and two bit positions i and j. Write a method to set all bits between i and j in N equal to M. M (becomes a substring of N locationed at and starting at j)

Example:
N = 10000000000 (1024)
M = 10101 (21)
i = 2
j = 6
Output: 10001010100 (1108)

*/

int replaceBits(int N, int M, int i, int j) {
  // 1. Make Mask
  // - Left Mask
  // 11110000000
  int leftMask = (~0) << (j + 1);

  // - Right Mask
  // 00000000011
  int rightMask = (1 << i) - 1;

  // 11110000000
  // 00000000011
  // 11110000011
  int mask = leftMask | rightMask;

  // Clear the values with the mask
  // 10000000000
  // 11110000011
  // 10000000000
  N &= mask;

  // Apply M to N, but M must be shifted to the left
  // 00001010100
  // 10000000000
  // 10001010100
  N |= (M << i);

  return N;
}

int main() {
  int N = 1024, M = 21, i = 2, j = 6;

  cout << replaceBits(N, M, i, j) << endl;
  
  return 0;
}