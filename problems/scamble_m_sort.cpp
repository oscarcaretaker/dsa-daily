#include <iostream>
#include <string>
using namespace std;

void joint(string &msg, int s, int m, int e) {

  int i = s;
  int j = m + 1;
  string temp1, temp2;
  while (i <= m) {
    temp1.push_back(msg[i]);
    i++;
  }

  while (j <= e) {
    temp2.push_back(msg[j]);
    j++;
  }
  string ans = temp2 + temp1;
  for (int i = 0; i < ans.length(); i++) {
    msg[s + i] = ans[i];
  }

  cout << msg << endl;
}

void divide(string &msg, int s, int e) {
  if (s < e) {
    for (int m = s; m < e; m++) {

      divide(msg, s, m);
      divide(msg, m + 1, e);
      joint(msg, s, m, e);
    }
  }
}

int main() {

  string msg = "great";
  int n = msg.length() - 1;
  divide(msg, 0, n);
  cout << msg << endl;
  return 0;
}
