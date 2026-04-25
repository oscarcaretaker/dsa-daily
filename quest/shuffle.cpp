#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n = 3;
  vector<int> arr = {2, 5, 1, 3, 4, 7};
  vector<int> ans;
  ans.push_back(arr[0]);
  for (int i = 1; i < n; i++) {
    ans.push_back(arr[i]);
    ans.push_back(arr[i + (n - 1)]);
  }
  ans.push_back(arr[(2 * n) - 1]);

  for (int i = 0; i < n * 2; i++) {
    cout << ans[i] << " ";
  }
  return 0;
}
