#include <iostream>
using namespace std;

int fact(int x) {
  int ans = 1;
  for (int i = x; i > 1; i--) {
    ans = ans * i;
  }
  return ans;
}

int binomial(int n, int k) {
  int ans;
  k = n - k;
  ans = fact(n) / (fact(k) * (fact(n - k)));
  return ans;
}

int main() {

  int row = 14;
  for (int r = 0; r < row; r++) {
    for (int c = 0; c <= r; c++) {
      cout << binomial(r, c) << " ";
    }
    cout << endl;
  }
  return 0;
}
