#include <iostream>
using namespace std;

int main() {
  int nums[] = {2, 4, 5, 7, 10, 45, 54};
  int n = sizeof(nums) / sizeof(int);
  int t = 0;
  int key = 11;
  for (int i = 0; i < n; i++) {
    if (nums[i] >= key) {
      cout << i << endl;
      t = 1;
      break;
    }
  }
  if (t == 0) {
    cout << n << endl;
  }
  return 0;
}
