#include <iostream>
using namespace std;

int main() {

  int arr[] = {3, 4, 13, 13, 13, 20, 40};
  int n = 7;

  int l = 0;
  int r = n - 1;
  int idx = -1;
  int key = 13; // to be searched
  int m;
  while (l <= r) {
    m = (l + r) / 2;
    if (arr[m] == key) {
      idx = m;
      l = m + 1;
    }
    if (arr[m] > key) {
      r = m - 1;
    } else {
      l = m + 1;
    }
  }

  cout << idx << endl;

  return 0;
}
