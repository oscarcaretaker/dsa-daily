#include <iostream>
using namespace std;

class Stack {

private:
  int size;
  int capacity;
  int *arr;

public:
  Stack(int n) {
    size = 0;
    capacity = n;
    arr = new int[n];
  }

  void push(int x) {
    if (size >= capacity) {
      cout << "Stack is full";
    } else {
      arr[size] = x;
      size++;
    }
  }

  void pop() {
    if (size == 0) {
      cout << "Stack is empty";
    } else {
      arr[size - 1] = 0;
      size--;
    }
  }

  void disp() {
    for (int i = 0; i < size; i++) {
      cout << arr[i] << " ";
    }
    cout << endl;
  }

  ~Stack() { delete[] arr; }
};

int main() {
  Stack student(5);
  student.push(10);
  student.push(20);
  student.push(30);
  student.push(300);
  student.disp();
  student.pop();
  student.disp();
  return 0;
}
