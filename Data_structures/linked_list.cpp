#include <iostream>
using namespace std;

class List {
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
  List() {
    head = nullptr;
    tail = nullptr;
  }

  void insertatHead(int x) {
    Node *newnode = new Node(x);
    if (head == nullptr) {
      head = newnode;
      tail = newnode;
    } else {
      newnode->next = head;
      head = newnode;
    }
  }

  void insertatTail(int x) {
    Node *newnode = new Node(x);
    if (head == nullptr) {
      head = newnode;
      tail = newnode;
    } else {
      tail->next = newnode;
      tail = newnode;
    }
  }

  void display() {
    if (head == nullptr) {
      cout << "empty" << endl;
    } else {
      Node *temp = head;
      while (temp != nullptr) {
        cout << temp->data << " --> ";
        temp = temp->next;
      }
      cout << "Null" << endl;
    }
  }

  void deleteatHead() {
    if (head == nullptr) {
      cout << "List is empty" << endl;
    } else {
      Node *temp = head;
      head = head->next;
      delete temp;
    }
  }

  void deleteatTail() {
    if (head == nullptr) {
      cout << "List is empty" << endl;
    } else {
      Node *temp = head;
      while (temp->next->next != nullptr) {
        temp = temp->next;
      }
      delete temp->next;
      tail = temp;
      temp->next = nullptr;
    }
  }
};

int main() {
  List num;
  num.insertatHead(10);
  num.insertatTail(20);
  num.insertatTail(30);
  num.deleteatHead();
  num.deleteatTail();
  num.deleteatTail();
  num.display();

  return 0;
}
