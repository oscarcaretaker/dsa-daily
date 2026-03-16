#include <iostream>
using namespace std;

template <class T> // templating
class Vector {

  // ---------------------------------------------------------------------------------------
private:
  T *_arr; // define the type of Data stored in array.
  int _capacity;
  int _size;

  void revise_capacity(int new_cap) {
    T *new_arr = new T[new_cap];
    for (int i = 0; i < _size; i++) { // Major contributor in Time Complexity
      new_arr[i] = _arr[i];           // copying
    }
    delete[] _arr;       // deleting old arr
    _arr = new_arr;      // new arr
    _capacity = new_cap; // updating capacity
  }
  // ----------------------------------------------------------------------------------------
public:
  // CONSTRUCTOR
  Vector(int cap = 1) { // initial 1 size is default
    _arr = new T[cap];
    _capacity = cap;
    _size = 0;
  }

  T elementAt(int i) { // FETCHING AN ELEMENT
    return _arr[i];
  }

  void append(const T &elem) { // APPENDING AN ARRAY
    if (_capacity == _size)    // stretch by double
    {
      revise_capacity(2 * _capacity);
    }
    _arr[_size] = elem;
    _size++;
  }

  T removeLast() { // SHRINK
    T ret = _arr[_size - 1];
    _size--;                    // 0.25 <= alpha <= 1
    if (_size == _capacity / 4) // shrink
      revise_capacity(_capacity / 2);
    return ret;
  }

  // INSERT AT SPECIFIC PART
  void insert_at(T val, int idx) {
    if (_size + 1 > _capacity) {
      revise_capacity(2 * _capacity);
    }
    _size++;
    for (int i = _size - 1; i >= idx; i--) {
      _arr[i + 1] = _arr[i];
    }
    _arr[idx] = val;
  }

  // GET LENGHT OF ARRAY
  int lenght() { return _size; }

  // Reverse the vector
  void rev() {
    for (int i = 0; i < (_size / 2); i++) {
      T temp = _arr[i];
      _arr[i] = _arr[_size - 1 - i];
      _arr[_size - 1 - i] = temp;
    }
  }

  // Removing an element with index
  void remove_at(int x) {
    if (x < _size) {
      for (int i = x; i < _size - 1; i++) {
        _arr[i] = _arr[i + 1];
      }
      _size--;
      if (_size == _capacity / 2) {
        revise_capacity(_capacity / 2);
      }
    } else {
      cout << "ENTER VALID INDEX NUMBER";
    }
  }

  void sort() {
    // Insertion sort
    for (int i = 0; i < _size; i++) {
      for (int j = 0; j < i; j++) {
        if (_arr[i] < _arr[j]) {
          T temp = _arr[i];
          _arr[i] = _arr[j];
          _arr[j] = temp;
        }
      }
    }
  }
};

int main() {
  Vector<int> v;

  for (int i = 1; i <= 10; i++) {
    v.append(2 * i);
  }

  v.insert_at(9, 0);
  v.insert_at(22, 2);

  cout << endl << "Original :";
  for (int i = 0; i < v.lenght(); i++) {
    cout << v.elementAt(i) << " ";
  }

  v.rev(); // reverse
  cout << endl << "REVERSE : ";
  for (int i = 0; i < v.lenght(); i++) {
    cout << v.elementAt(i) << " ";
  }

  // v.remove_at(1);  // removing index = 1
  v.sort();
  cout << endl << "Sorted : ";
  for (int i = 0; i < v.lenght(); i++) {
    cout << v.elementAt(i) << " ";
  }

  cout << endl;
}
