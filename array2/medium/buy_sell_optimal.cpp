#include <climits>
#include <iostream>
using namespace std;

int main() {

  int nums[] = {7, 1, 5, 3, 6, 4};
  int n = sizeof(nums) / sizeof(nums[0]);
  int max_pr = 0;
  int min_num = INT_MAX;
  for (int i = 0; i < n; i++) {
    min_num = min(min_num, nums[i]);
    max_pr = max(nums[i] - min_num, max_pr);
  }

  cout << max_pr << endl;

  return 0;
}
