#include <iostream>
using namespace std;

int bsearch(int arr[], int s, int e, int key) {
  if (s <= e) {
    int m = (s + e) / 2;
    if (arr[m] == key) {
      return m;
    } else {
      if (arr[m] > key) {
        return bsearch(arr, s, m - 1, key);
      } else {
        return bsearch(arr, m + 1, e, key);
      }
    }
  } else {
    return -1;
  }
}

int main() {

  int nums[] = {2, 7, 10, 14, 18, 22, 25, 70};
  int n = 8;

  cout << bsearch(nums, 0, n - 1, 10);

  cout << bsearch(nums, 0, n - 1, 70);
  cout << bsearch(nums, 0, n - 1, 2);
  cout << bsearch(nums, 0, n - 1, 23);
  return 0;
}
