#include <iostream>
using namespace std;

int main() {

  int arr[] = {10, 22, 12, 3, 0, 6};
  int n = sizeof(arr) / sizeof(arr[0]);

  if (n == 0) {
    return 0;
  }

  int point = 0;
  for (int i = n - 1; i >= 0; i--) {
    if (arr[i] > point) {
      cout << arr[i] << " ";
      point = arr[i];
    }
  }
  cout << endl;
  return 0;
}
