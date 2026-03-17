#include <climits>
#include <iostream>
using namespace std;

class Vector {
private:
  int size;
  int cap;
  int *arr;

  void revise_cap(int new_cap) {
    int *temp = new int[new_cap];
    for (int i = 0; i < size; i++) {
      temp[i] = arr[i];
    }
    delete[] arr;
    arr = temp;
    cap = new_cap;
  }

public:
  Vector(int x = 1) {
    cap = x;
    arr = new int[cap];
    size = 0;
  }

  void add(int n) {
    if (size == cap) {
      revise_cap(cap * 2);
    }
    arr[size] = n;
    size++;
  }

  void largest() {
    int x = INT_MIN;
    for (int i = 0; i < size; i++) {
      if (arr[i] > x) {
        x = arr[i];
      }
    }
    cout << "Largest = " << x << endl;
  }

  void disp() {
    for (int i = 0; i < size; i++) {
      cout << arr[i] << " ";
    }
    cout << endl;
  }

  ~Vector() { delete[] arr; }
};

int main() {
  Vector num;
  num.add(20);
  num.add(30);
  num.add(40);
  num.disp();
  num.largest();
  return 0;
}
