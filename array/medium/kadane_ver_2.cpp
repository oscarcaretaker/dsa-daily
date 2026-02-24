#include <iostream>
using namespace std;

int main() {
  int nums[] = {-2, -3, -7, -2, -10, -4};
  int n = sizeof(nums) / sizeof(nums[0]);

  int current = 0;
  int msum = -1000;
  int start = 0;
  int end = 0;
  for (int i = 0; i < n; i++) {
    if (current + nums[i] > current) {
      end = i;
    }

    current = current + nums[i];
    if (current < 0) {
      msum = max(current, msum);
      start = i;
    }
  }
  for (int i = start; i <= end; i++) {
    cout << nums[i] << " ";
  }
  cout << endl;
  return 0;
}
