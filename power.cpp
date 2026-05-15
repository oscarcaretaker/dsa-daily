#include <iostream>
using namespace std;

int main() {
  int n = -2147483648;
  double x = 2.000;
  double y = x;

  if (n == 0) {
    cout << 1;
    return 0;
  }
  if (n < 0) {
    while (n != -1) {
      x = x * y;
      n++;
    }
    cout << 1 / x;
  } else {
    while (n != 1) {
      x = x * y;
      n--;
    }
    cout << x;
  }
  return 0;
}
