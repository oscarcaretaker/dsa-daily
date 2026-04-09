#include <iostream>
using namespace std;

template <class T> class Circular_Queue {
private:
  T *_arr;
  int _front, _rear, _capacity;

public:
  Circular_Queue(int x) {
    _capacity = cap + 1;
    _arr = new T[_capacity];
    _front = _rear = 0;
  }

  bool is_Empty() { return _fornt == _rear; }

  bool is_full() { return (_rear + 1) % _capacity == _front; }
};

int main() { return 0; }
