#include <iostream>
using namespace std;

class Stack {
private:
  int size;
  int capacity;
  int arr[];

public:
  Stack(int s) {
    capacity = s;
    int arr[s] = {};
    size = 0;
  }

  void push(int x) {
    if (size < capacity) {
      arr[size] = x;
      size++;
    } else {
      cout << "Stack is full." << endl;
    }
  }

  int top() { return arr[size]; }

  bool is_empty() { return size == 0; }

  bool is_full() { return size == capacity; }

  int pop() {
    if (is_empty() || is_full()) {
      return 1;
    } else {
      arr[size] = 0;
      size--;
      return 0;
    }
  }

  void disp() {
    for (int i = size - 1; i >= 0; i--) {

      cout << "|" << arr[i] << "|" << endl;
    }
    cout << endl;
  }
};

int main() {

  Stack st(10);
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(22);

  st.disp();

  st.pop();

  st.disp();

  return 0;
}
