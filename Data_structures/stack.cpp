#include <iostream>
using namespace std;
class Stack {
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
        cout << "Display Function : EMPTY STACK" << endl;
      } else {
        Node *temp = head;
        while (temp != nullptr) {
          cout << temp->data << " || ";
          temp = temp->next;
        }
        cout << endl;
      }
    }

    void deleteatTail() {
      if (head == nullptr) {
        cout << "Stack Underflow." << endl;
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
        cout << "Popped." << endl;
      }
    }

    bool search(int x) {
      Node *temp = head;
      while (temp != nullptr) {
        if (temp->data == x) {
          cout << "SEARCH : " << x << " is present in STACK." << endl;
          return true;
        }
        temp = temp->next;
      }
      cout << "SEARCH : " << x << " is not present in Stack.";
      return false;
    }
  };

  List stx;
  int lenght;
  int cap;

public:
  Stack(int x) {
    cap = x;
    lenght = 0;
  }

  void push(int x) {
    if (lenght < cap) {
      stx.insertatTail(x);
      lenght++;
    } else {
      cout << "Stack Overflow" << endl;
    }
  }

  void pop() {
    if (lenght > 0 && lenght <= cap) {
      stx.deleteatTail();
      lenght--;
    } else {
      cout << "Stack Overflow" << endl;
    }
  }

  void disp() { stx.display(); }

  int get_size() {
    cout << lenght << " / " << cap << endl;
    return lenght;
  }

  bool is_full() { return lenght == cap; }

  bool is_empty() { return lenght == 0; }
};
int main() {
  Stack num(5);
  if (num.is_empty()) {
    cout << "Amaze" << endl;
  }
  num.push(30);
  num.push(40);
  num.disp();
  num.get_size();
  num.pop();
  num.push(6);
  num.push(10);
  num.push(122);
  num.push(200);
  num.push(29);
  num.get_size();
  num.disp();
  return 0;
}
