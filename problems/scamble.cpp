#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

unordered_map<string, bool> memo;

bool solve(string A, string B) {
  if (A == B)
    return true;

  if (A.length() <= 1)
    return false;

  string key = A + "|" + B;
  if (memo.count(key))
    return memo[key];

  string tempA = A, tempB = B;
  sort(tempA.begin(), tempA.end());
  sort(tempB.begin(), tempB.end());
  if (tempA != tempB)
    return memo[key] = false;

  int n = A.length();
  bool flag = false;

  for (int i = 1; i < n; i++) {
    if (solve(A.substr(0, i), B.substr(0, i)) &&
        solve(A.substr(i), B.substr(i))) {
      flag = true;
      break;
    }

    if (solve(A.substr(0, i), B.substr(n - i)) &&
        solve(A.substr(i), B.substr(0, n - i))) {
      flag = true;
      break;
    }
  }

  return memo[key] = flag;
}

int main() {
  string A = "great", B = "rgeat";
  cout << (solve(A, B) ? 1 : 0) << endl;
  return 0;
}
