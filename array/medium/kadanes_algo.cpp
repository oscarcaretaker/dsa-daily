#include <bits/stdc++.h>
using namespace std;

int main() {
  int nums[] = {2, 3, 5, -2, 7, -4};
  int s = sizeof(nums) / sizeof(nums[0]);

  int current = 0;
  int msum = INT_MIN;

  for (int i = 0; i < s; i++) {
    current = current + nums[i];
    msum = max(current, msum);
    if (current < 0)
      current = 0;
  }
  cout << msum << endl;
  return 0;
}

/* BigO(N2)
int main() {
  int nums[] = {2, 3, 5, -2, 7, -4};
  int n = sizeof(nums) / sizeof(nums[0]);

  int ans = 0;

  for (int i = 0; i < n; i++) {
    int sum = 0;
    for (int j = i; j < n; j++) {
      sum = sum + nums[j];
    }
    ans = max(ans, sum);
  }

  for (int i = n - 1; i >= 0; i--) {
    int sum = 0;
    for (int j = 0; j <= i; j++) {
      sum = sum + nums[j];
    }
    ans = max(ans, sum);
  }
  cout << ans << endl;
  return 0;
 }*/
