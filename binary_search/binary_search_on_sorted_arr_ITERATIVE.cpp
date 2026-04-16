#include <iostream>
using namespace std;

int main() {

  int nums[] = {2, 7, 10, 14, 18, 22, 25, 70};
  int n = 8;
  int key = 25;

  int s = 0;
  int e = n;
  while (s <= e) {
    int m = (s + e) / 2;
    if (nums[m] == key) {
      cout << m << endl;
      break;
    } else {
      if (nums[m] > key) {
        e = m;
      }
      if (nums[m] < key) {
        s = m;
      }
    }
  }

  cout << endl;
  return 0;
}
