#include <iostream>
using namespace std;

class Linked_List {
private:
  class Node {
  public:
    int data;
    Node *next;
    Node(int x) {
      data = x;
      next = nullptr;
    }
  };
  Node *head;
  Node *tail;

public:
  Linked_List() {
    head = nullptr;
    tail = nullptr;
  }

  void append(int x) {
    Node *newnode = new Node(x);
    if (head == nullptr) {
      head = newnode;
      tail = newnode;
    } else {
      tail->next = newnode;
      tail = newnode;
    }
  }

  void prepend(int x) {
    Node *newnode = new Node(x);
    if (head == nullptr) {
      head = newnode;
      tail = newnode;
    } else {
      newnode->next = head;
      head = newnode;
    }
  }

  void disp() {
    Node *temp = head;
    while (temp != nullptr) {
      cout << temp->data << " ";
      temp = temp->next;
    }

    cout << "Null" << endl;
  }
};

int main() {
  Linked_List num;
  num.append(20);
  num.append(30);
  num.prepend(10);
  num.disp();
  return 0;
}
