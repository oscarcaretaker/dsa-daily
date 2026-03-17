// queue suig linked list
#include <iostream>
using namespace std;

class Queue {
private:
  class List {
  public:
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

    List() {
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

    void rm_first() {
      if (head == nullptr) {
        cout << "Empty";
      } else {
        Node *del = head;
        head = head->next;
        delete del;
      }
    }

    void disp() {
      Node *temp = head;
      while (temp == nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
      }
      cout << "Null" << endl;
    }
  };

public:
  Queue() { List(); }

  void enqueue(int x) {}
};
int main() { return 0; }
