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
      cout << "Display Function : EMPTY LIST" << endl;
    } else {
      Node *temp = head;
      cout << "LIST : ";
      while (temp != nullptr) {
        cout << temp->data << " --> ";
        temp = temp->next;
      }
      cout << "Null" << endl;
    }
  }

  void deleteatHead() {
    if (head == nullptr) {
      cout << "List is empty cannot delete form Head." << endl;
    } else {
      if (head->next == nullptr) {
        delete head;
        head = nullptr;
        tail = nullptr;
      } else {
        Node *temp = head;
        head = head->next;
        delete temp;
      }
    }
  }

  void deleteatTail() {
    if (head == nullptr) {
      cout << "List is empty cannot delete from Tail." << endl;
    } else {
      if (head->next == nullptr) {
        delete head;
        head = nullptr;
        tail = nullptr;
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
  }

  void get_next() { cout << head->next << endl; }

  void deletebyValue(int x) {
    if (head == nullptr) {
      cout << "List is empty cannot delete form value" << endl;
    } else {
      if (head->next == nullptr) {
        if (head->data == x) {
          delete head;
          head = nullptr;
          tail = nullptr;
          cout << "Deleted " << x << endl;
        } else {
          cout << "Element " << x << " not present in the list" << endl;
        }
      } else {
        Node *temp = head;
        Node *prev = head;
        while (temp != nullptr) {
          if (temp->data == x) {
            prev->next = temp->next;
            delete temp;
            cout << "Deleted " << x << endl;
            return;
          }
          prev = temp;
          temp = temp->next;
        }
        cout << "Element Not present in list." << endl;
      }
    }
  }

  bool search(int x) {
    Node *temp = head;
    while (temp != nullptr) {
      if (temp->data == x) {
        cout << "SEARCH : " << x << " is present in list." << endl;
        return true;
      }
      temp = temp->next;
    }
    cout << "SEARCH : " << x << " is not present in list.";
    return false;
  }

  int len() {
    int count = 0;
    Node *temp = head;
    while (temp != nullptr) {
      temp = temp->next;
      count++;
    }
    cout << "Lenght : " << count << endl;
    return count;
  }
};

int main() {
  List num;
  num.insertatHead(10);
  num.insertatTail(20);
  num.insertatTail(30);
  num.len();
  num.deleteatTail();
  num.len();
  num.deleteatTail();
  num.deleteatHead();
  num.len();
  num.display();

  return 0;
}
