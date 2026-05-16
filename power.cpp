#include <iostream>
using namespace std;

int main() {
  int n = 100;
  double x = 2.000;
  double y = x;

  while (n > 1) {
    if (n % 2 != 0) {
      n--;
      x = x * y;
      // cout << "dec " << n << endl;
    }
    if (n % 2 == 0) {
      n = n / 2;
      x = x * x;
      // cout << " by 2 " << n << endl;
    }
  }
  cout << x << endl;
  return 0;
}
