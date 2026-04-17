#include <iostream>
using namespace std;

int main() {
  int arr[] = {2, 4, 8, 10};
  int n = 4; // Number of elements
  int s = 0;
  int e = n - 1;
  int key = 20;
  int ans = n; // Default if no element is >= key

  while (s <= e) {
    int m = s + (e - s) / 2;

    if (arr[m] >= key) {
      ans = m;   // This could be our answer...
      e = m - 1; // ...but look left to see if there's a smaller index
    } else {
      s = m + 1; // Look right
    }
  }

  cout << "Index: " << ans << endl; // For key 3, this outputs 1 (value 4)
  return 0;
}
