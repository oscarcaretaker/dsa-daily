#include <iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right) {
  int n1 = mid - left + 1;
  int n2 = right - mid;

  // create temp arrays
  int *L = new int[n1];
  int *R = new int[n2];

  // copy data
  for (int i = 0; i < n1; i++)
    L[i] = arr[left + i];
  for (int j = 0; j < n2; j++)
    R[j] = arr[mid + 1 + j];

  int i = 0, j = 0, k = left;

  // merge temp arrays back
  while (i < n1 && j < n2) {
    if (L[i] <= R[j]) {
      arr[k++] = L[i++];
    } else {
      arr[k++] = R[j++];
    }
  }

  // copy remaining elements
  while (i < n1)
    arr[k++] = L[i++];

  while (j < n2)
    arr[k++] = R[j++];

  delete[] L;
  delete[] R;
}

void mergeSort(int arr[], int left, int right) {
  if (left >= right)
    return;

  int mid = left + (right - left) / 2;

  mergeSort(arr, left, mid);
  mergeSort(arr, mid + 1, right);
  merge(arr, left, mid, right);
}

int main() {

  int nums[] = {7, 0, 0, 1, 7, 7, 2, 7, 7};
  int n = sizeof(nums) / sizeof(int);

  // Sorting using merge Sorting
  mergeSort(nums, 0, n - 1);

  // Logic
  int count = 0;
  int value = nums[0];

  for (int i = 0; i < n; i++) {
    if (nums[i] == value) {
      count++;
    } else {
      if (count > (n / 2)) {
        cout << value << endl;
        return 0;
      }
      count = 1;
      value = nums[i];
    }
  }
  if (count > n / 2) {
    cout << value << endl;
  } else {
    cout << "NO One is in majority" << endl;
  }
  return 0;
}
