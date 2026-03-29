#include <iostream>
using namespace std;

class List {
private:
  class Node {
  public:
    int data;
    Node *next;
    Node *prev;
    Node(int x) {
      data = x;
      next = prev = nullptr;
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
      head->prev = newnode;
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
      newnode->prev = tail;
      tail->next = newnode;
      tail = newnode;
    }
  }

  void displayFromHead() {
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

  void displayFromTail() {
    if (head == nullptr) {
      cout << "Display Function : EMPTY LIST" << endl;
    } else {
      Node *temp = tail;
      cout << "LIST : ";
      while (temp != nullptr) {
        cout << temp->data << " --> ";
        temp = temp->prev;
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
        head->prev = nullptr;
        head = head->next;
        delete temp;
      }
      cout << "Node deleted at Head" << endl;
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
        tail = tail->prev;
        delete tail->next;
        tail->next = nullptr;
      }
      cout << "Node deleted at tail." << endl;
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
    //  cout << "Lenght : " << count << endl;
    return count;
  }

  int valueatPos(int x) {
    if (len() < x) {
      cout << "Enter valid position." << endl;
    } else {
      if (len() == x) {
        return tail->data;
      } else {
        if (x == 1) {
          return head->data;
        } else {
          Node *temp = head;
          for (int i = 1; i < x; i++) {
            temp = temp->next;
          }
          return temp->data;
        }
      }
    }
    return 0;
  }

  /* ~List() {
     Node *temp = head;
     while (temp != nullptr) {
       Node *nextNode = temp->next;
       delete temp;
       temp = nextNode;
     }
   } */
};

int main() {
  List num;
  num.insertatTail(10);
  num.insertatTail(20);
  num.insertatTail(30);
  num.insertatTail(40);
  num.insertatTail(50);
  num.displayFromHead();
  num.displayFromTail();
  return 0;
}
