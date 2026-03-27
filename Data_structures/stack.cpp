#include <iostream>
using namespace std;

class Stack {
private:
  class StackNode {
  public:
    int data;
    StackNode *next;
    StackNode(int x) {
      next = nullptr;
      data = x;
    }
  };
  StackNode *head;
  int lenght;
  int cap;

public:
  Stack(int x) {
    lenght = 0;
    cap = x;
    head = nullptr;
  }

  // inserting the element in top.
  void push(int x) {
    if (lenght < cap) {
      StackNode *newnode = new StackNode(x);
      if (head == nullptr) {
        head = newnode;
        lenght++;
      } else {
        newnode->next = head;
        head = newnode;
        lenght++;
      }
    } else {
      cout << "Overflow" << endl;
    }
  }

  // poping the top element
  void pop() {
    if (head == nullptr) {
      cout << "Underflow" << endl;
    } else {
      StackNode *temp = head;
      head = head->next;
      delete temp;
      lenght--;
    }
  }

  // returns the value of top element.
  int peek() {
    if (head == nullptr) {
      cout << "Empty stack" << endl;
      return 0;
    } else {
      cout << "Peek -> ";
      return head->data;
    }
  }

  // display like a stack;
  void disp() {
    if (head == nullptr) {
      cout << "Empty Stack" << endl;
    } else {
      StackNode *temp = head;
      cout << "----" << endl;
      while (temp != nullptr) {
        cout << " " << temp->data << " " << endl << "----" << endl;
        temp = temp->next;
      }
    }
  }

  // check its empty or NOt
  bool isEmpty() { return lenght == 0; }

  // check its full or not
  bool isFull() { return lenght == cap; }

  // return is size
  int size() { return lenght; }

  // destructor
  ~Stack() {
    while (head != nullptr) {
      StackNode *temp = head;
      head = head->next;
      delete temp;
    }
  }
};

int main() {
  Stack num(5);
  num.push(10);
  num.push(20);
  cout << num.peek() << endl;
  num.push(40);
  num.pop();
  num.pop();
  num.disp();
  cout << num.size();
  return 0;
}
