#include <algorithm>
#include <iostream>
using namespace std;

int partition(int arr[], int s, int e) {
  int pivot = arr[e];
  int idx = s - 1;
  for (int j = s; j < e; j++) {
    if (arr[j] <= pivot) {
      ++idx;
      swap(arr[j], arr[idx]);
    }
  }
  ++idx;
  swap(arr[idx], arr[e]);
  return idx;
}

void quick_sort(int arr[], int s, int e) {
  if (s < e) {
    int p = partition(arr, s, e);
    quick_sort(arr, s, p - 1);
    quick_sort(arr, p + 1, e);
  }
}

int main() {
  int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
  int n = 10;
  quick_sort(arr, 0, 9);

  for (int i = 0; i < 10; i++) {
    cout << " " << arr[i];
  }
  return 0;
}
