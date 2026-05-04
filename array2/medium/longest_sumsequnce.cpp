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

  int arr[] = {1, 2, 3, 5, 6, 7, 8, 9, 10};
  int n = sizeof(arr) / sizeof(int);
  divide(arr, 0, n - 1);

  int count = 1;
  int a = arr[0];
  int ans = 0;
  for (int i = 1; i <= n - 1; i++) {
    if (a + 1 == arr[i]) {
      a = arr[i];
      count++;
    } else {
      a = arr[i];
      ans = max(count, ans);
      count = 1;
    }
  }

  cout << ans << endl;
  return 0;
}
