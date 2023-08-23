#include <bits/stdc++.h>

using namespace std;

/*

You are given two 32-bit numbers, N and M, and two bit positions i and j. Write a method to set all bits between i and j in N equal to M. M (becomes a substring of N locationed at and starting at j)

Example:
N = 10000000000 (1024)
M = 10101 (21)
i = 2
j = 6
Output: 1001010100 (596)

*/

int replaceBits(int N, int M, int i, int j) {
  // 1. Make Mask
  // - Left Mask
  // 111110000000
  int leftMask = (~0) << (j + 1);

  // - Right Mask
  // 000000000011
  int rightMask = (1 << i) - 1;

  // 111110000000
  // 000000000011
  // 111110000011
  int mask = leftMask | rightMask;
  
  // Apply M to Mask, but M must be shifted to the left
  // 000001010100
  // 111110000011
  // 111111010100
  mask |= M << i;

  // Todo: Not Finished (Wrong Answer)

  return mask;
}

int main() {
  int N = 1024, M = 21, i = 2, j = 6;

  cout << replaceBits(N, M, i, j) << endl;
  
  return 0;
}