#include <iostream>
#include <vector>
using namespace std;

class Heap {
private:
  vector<int> _arr;
  int parent(int i) { return (i - 1) / 2; }
  int left(int i) { return i * 2 + 1; }
  int right(int i) { return i * 2 + 2; }

  void max_heapify(int i) {
    int l = left(i);
    int r = right(i);
    int max = i;
    if (l < _arr.size() && _arr[max] < _arr[l]) {
      max = l;
    }

    if (r < _arr.size() && _arr[max] < _arr[r]) {
      max = r;
    }
    if (max == i) {
      return;
    }
    swap(_arr[i], _arr[max]);
    max_heapify(max);
  }

  void build_heap() {
    for (int i = _arr.size() / 2 - 1; i >= 0; i--) {
      max_heapify(i);
    }
  }

public:
  Heap(vector<int> v) {
    for (int i = 0; i < v.size(); i++) {
      _arr.push_back(v[i]);
    }
    build_heap();
  }
  ~Heap() {}

  friend ostream &operator<<(ostream &out, const Heap &h) {
    for (int i = 0; i < h._arr.size(); i++) {
      out << h._arr[i] << " ";
    }
    return out;
  }
};

int main() {
  vector<int> v = {2, 5, 8, 30, 20, 15, 10, 40, 50, 100};
  Heap h(v);
  cout << h;

  cout << endl << "END OF PROGRAM" << endl;
  return 0;
}
