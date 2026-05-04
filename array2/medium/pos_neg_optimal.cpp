// SPACE COMPLEXITY = n
#include <iostream>
using namespace std;

int main() {
  int nums[] = {1, 2, -4, -5};
  int n = sizeof(nums) / sizeof(nums[0]);

  int ans[n];

  int pos = 0;
  int neg = 1;

  for (int i = 0; i < n; i++) {
    if (nums[i] > 0) {
      ans[pos] = nums[i];
      pos = pos + 2;
    }
    if (nums[i] < 0) {
      ans[neg] = nums[i];
      neg = neg + 2;
    }
  }
  for (int i = 0; i < n; i++) {
    cout << ans[i] << " ";
  }
  cout << endl;
}
