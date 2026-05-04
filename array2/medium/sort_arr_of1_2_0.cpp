#include <iostream>
using namespace std;

void swap(int *x, int *y);

int main() {

  int nums[] = {2, 2, 2, 2, 1, 1, 1, 0, 0, 0, 0};
  int pointer = 0;
  int n = sizeof(nums) / sizeof(int);

  for (int i = 0; i < n; i++) {
    if (nums[i] == 0) {
      swap(&nums[i], &nums[pointer]);
      pointer++;
    }
  }

  for (int i = pointer; i < n; i++) {
    if (nums[i] == 1) {
      swap(&nums[i], &nums[pointer]);
      pointer++;
    }
  }

  for (int i = 0; i < n; i++) {
    cout << nums[i] << " ";
  }
}

void swap(int *x, int *y) {
  int temp = *y;
  *y = *x;
  *x = temp;
}
