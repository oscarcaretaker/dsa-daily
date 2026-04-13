#include <iostream>
#include <string>
#include <vector>

using namespace std;

int isMatch(string A, string B) {
  int n = A.length();
  int m = B.length();

  vector<vector<bool>> dp(n + 1, vector<bool>(m + 1, false));

  dp[0][0] = true;

  for (int j = 1; j <= m; j++) {
    if (B[j - 1] == '*') {
      dp[0][j] = dp[0][j - 1];
    } else {
      break;
    }
  }

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      if (B[j - 1] == '?' || A[i - 1] == B[j - 1]) {
        dp[i][j] = dp[i - 1][j - 1];
      } else if (B[j - 1] == '*') {

        dp[i][j] = dp[i][j - 1] || dp[i - 1][j];
      }
    }
  }

  return dp[n][m] ? 1 : 0;
}

int main() {
  string A = "aa a";
  string B = "aaa";
  cout << "Result: " << isMatch(A, B) << endl; // Output: 0
  return 0;
}
