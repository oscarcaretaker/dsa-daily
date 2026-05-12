#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void two_pair(int z, int x, int y) {
  if (x <= y) {
    cout << z << " " << x << " " << y << endl;
    cout << z << " " << y << " " << x << endl;
  } else {
    cout << z << " " << y << " " << x << endl;
    cout << z << " " << x << " " << y << endl;
  }
}

int main() {

  vector<int> nums = {3, 4, 5};

  cout << next_permutation(nums.begin(), nums.end());
  // display
  /* for (int i = 0; i < n; i++) {
     cout << nums[i] << " ";
   }
   cout << endl;
 */
  return 0;
}
