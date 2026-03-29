#include <iostream>
using namespace std;

class example {
private:
  int data;

public:
  example() { cout << " Inside the constructor"; }
  ~example() { cout << " Inside the desctructor"; }
};

int main() {
  example e;
  return 0;
}
