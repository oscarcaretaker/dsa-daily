#include <iostream>
#include <vector>
using namespace std;

int main() {
  int numRows = 5;

  // if(numRows == 0){return ans;}
  vector<int> temp = {1, 1};
  vector<int> ans;
  cout << "1" << endl << "1 1" << endl;

  for (int i = 3; i <= numRows; i++) {
    cout << "1 ";
    for (int j = 0; i < temp.size(); j++) {
      if (j == 0 || j == i - 2) {
        ans.push_back(temp[0] + 1);
        cout << temp[0] + 1 << " ";
      } else {
        cout << temp[i - 1] + temp[i] << " ";
        ans.push_back(temp[i - 1] + temp[i]);
      }
    }
    temp = ans;
    ans.clear();
    cout << "1" << endl;
  }

  return 0;
}
