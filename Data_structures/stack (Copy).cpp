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
    lenght = 1;
    cap = x;
    head = nullptr;
  }

  void push(int x) {
    StackNode *newnode = new StackNode(x);
    if (head == nullptr) {
      head = newnode;
    } else {
      newnode->next = head;
      head = newnode;
    }
  }

  void pop() {
    if (head == nullptr) {
      cout << "Underflow" << endl;
    } else {
      StackNode *temp = head;
      head = head->next;
      delete head;
    }
  }
};

int main() { return 0; }
