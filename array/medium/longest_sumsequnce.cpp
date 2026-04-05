#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int s, int m, int e) {
  int i = s;
  int j = m + 1;
  vector<int> temp;

  while (i <= m && j <= e) {
    if (arr[i] <= arr[j]) {
      temp.push_back(arr[i]);
      i++;
    } else {
      temp.push_back(arr[j]);
      j++;
    }
  }

  while (i <= m) {
    temp.push_back(arr[i]);
    i++;
  }

  while (j <= e) {
    temp.push_back(arr[j]);
    j++;
  }

  for (int i = 0; i < temp.size(); i++) {
    arr[s + i] = temp[i];
  }
}

void divide(int arr[], int s, int e) {
  if (s < e) {
    int m = (s + e) / 2;
    divide(arr, s, m);
    divide(arr, m + 1, e);
    merge(arr, s, m, e);
  }
}

int main() {

  int arr[] = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
  divide(arr, 0, 9);
  int ans = 1;
  int n = sizeof(arr) / sizeof(int);
  for (int i = 0; i < n - 1; i++) {
    if (arr[i] + 1 == arr[i + 1]) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
