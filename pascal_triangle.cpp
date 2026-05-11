#include <iostream>
#include <vector>
using namespace std;

int main() {
  int numRows = 5;

  // if(numRows == 0){return ans;}
  vector<int> temp = {1, 1};
  vector<int> ans;
  for (int i = 3; i <= numRows; i++) {
    ans.push_back(1);
    cout << "1 ";
    for (int j = 1; j < temp.size(); j++) {
      int k = temp[j] + temp[j - 1];
      ans.push_back(k);
      cout << k << " ";
    }
    ans.push_back(1);
    cout << "1 " << endl;
    temp = ans;
    ans.clear();
  }

  return 0;
}
