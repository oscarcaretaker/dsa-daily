#include <bits/stdc++.h>
using namespace std;

bool isScramble(string A, string B) {
  int n = A.size();
  if (n != B.size())
    return false;

  // dp[i][j][len]
  vector<vector<vector<bool>>> dp(
      n, vector<vector<bool>>(n, vector<bool>(n + 1, false)));

  // Base case
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      dp[i][j][1] = (A[i] == B[j]);
    }
  }

  // Build DP
  for (int len = 2; len <= n; len++) {
    for (int i = 0; i <= n - len; i++) {
      for (int j = 0; j <= n - len; j++) {

        for (int k = 1; k < len; k++) {

          // Case 1: No swap
          if (dp[i][j][k] && dp[i + k][j + k][len - k]) {
            dp[i][j][len] = true;
            break;
          }

          // Case 2: Swap
          if (dp[i][j + len - k][k] && dp[i + k][j][len - k]) {
            dp[i][j][len] = true;
            break;
          }
        }
      }
    }
  }

  return dp[0][0][n];
}

int main() {
  string A = "great";
  string B = "rgtae";

  if (isScramble(A, B))
    cout << "Yes, scrambled\n";
  else
    cout << "No\n";

  return 0;
}
