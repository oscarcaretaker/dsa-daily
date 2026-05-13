#include <iostream>
using namespace std;

int main() {
  int n = 10;
  double x = 2.0;
  // if(n == 0){return 1.0;}
  bool flag = false;

  while (n != 1) {
    x = x * x;
    n--;
  }
  cout << x;
  return 0;
}
