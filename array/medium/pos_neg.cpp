#include <iostream>
using namespace std;

int main() {
  int nums[] = {1, 2, -4, -5};
  int n = sizeof(nums) / sizeof(nums[0]);

  int pos = 0;
  // int neg = 1;

  for (int i = 0; i < n; i = i + 2) {
    if (nums[i] > 0) {
      swap(nums[i], nums[pos]);
      pos = pos + 2;
    }
    /* if (nums[i] < 0) {
       swap(nums[i], nums[neg]);
       neg = neg + 2;
     }*/
  }
  for (int i = 0; i < n; i++) {
    cout << nums[i] << " ";
  }
  cout << endl;
}
