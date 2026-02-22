#include <iostream>
using namespace std;

void swap(int *x, int *y);

int main() {

  int nums[] = {2, 2, 2, 2, 1, 1, 1, 0, 0, 0, 0};
  int low = 0;
  int mid = 0;
  int n = sizeof(nums) / sizeof(int);
  int high = n - 1;

  // DUTCH STAR ALGORITHM
  while (mid <= high) {
    if (nums[mid] == 0) {
      swap(&nums[mid], &nums[low]);
      ++mid;
      ++low;
    } else {
      if (nums[mid] == 2) {
        swap(&nums[mid], &nums[high]);
        ++mid;
        --high;
      } else {
        ++mid;
      }
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
