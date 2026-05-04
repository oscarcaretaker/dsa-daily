#include <iostream>
using namespace std;

int main() {

  int nums[] = {7, 1, 5, 3, 6, 4};
  int n = sizeof(nums) / sizeof(nums[0]);
  int max_pr = 0;
  for (int i = n - 1; i >= 1; i--) {
    for (int j = 0; j < i; j++) {
      if (nums[j] >= nums[i]) {
        continue;
      } else {
        max_pr = max(nums[i] - nums[j], max_pr);
      }
    }
  }

  cout << max_pr << endl;

  return 0;
}
