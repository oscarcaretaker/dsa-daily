#include <iostream>
#include <vector>
using namespace std;

// merge the sorted
void merge(vector<int> &arr, int start, int mid, int end) {
  vector<int> temp;
  int i = start;
  int j = mid + 1;
  while (i <= mid && j <= end) {
    if (arr[i] < arr[j]) {
      temp.push_back(arr[i]);
      i++;
    } else {
      temp.push_back(arr[j]);
      j++;
    }
  }

  // remaining of left
  while (i <= mid) {
    temp.push_back(arr[i]);
    i++;
  }
  // remaining of right
  while (j <= end) {
    temp.push_back(arr[j]);
    j++;
  }

  // copying to main
  for (int i = 0; i < temp.size(); i++) {
    arr[start + i] = temp[i];
  }
}

// DIVIDE THE ARRAY TILL ELEMENTRY
void merge_sort(vector<int> &arr, int start, int end) {
  if (start < end) {
    int mid = start + (end - start) / 2;
    merge_sort(arr, start, mid);
    merge_sort(arr, mid + 1, end);
    merge(arr, start, mid, end);
  }
}

int main() {
  vector<int> arr = {12, 3, 2, 4, 22, 65, 78, 53, 2, 5};
  merge_sort(arr, 0, arr.size() - 1);
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}
