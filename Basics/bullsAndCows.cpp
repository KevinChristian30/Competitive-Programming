#include <bits/stdc++.h>
using namespace std;

string getHint(string secret, string guess) {
  int bulls = 0, cows = 0;
  for (int i = 0; i < guess.length(); i++) {
    if (guess[i] == secret[i]) { 
      bulls++;
      secret[i] = 'X';
    } else {
      size_t index = secret.find(guess[i]);
      if (index != string::npos) {
        cows++;
        secret[index] = 'X';
      }
    }
  }

  return to_string(bulls) + "A" + to_string(cows) + "B";
}

int main() {
  cout << getHint("1123", "0111") << endl;
}