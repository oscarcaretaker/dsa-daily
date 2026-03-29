#define LIST_H
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
        Node *temp = head;
        while (temp->next->next != nullptr) {
          temp = temp->next;
        }
        delete temp->next;
        tail = temp;
        temp->next = nullptr;
      }
      cout << "Node deleted at tail." << endl;
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
    //  cout << "Lenght : " << count << endl;
    return count;
  }

  void deleteatPos(int x) {
    if (len() < x) {
      cout << "Enter valid position number for deletion." << endl;
    } else {
      if (x == 1) {
        deleteatHead();
      } else {
        if (x == len()) {
          deleteatTail();
        } else {
          Node *temp = head;
          Node *prev = head;
          for (int i = 1; i < x; i++) {
            prev = temp;
            temp = temp->next;
          }
          prev->next = temp->next;
          cout << "Deleted value : " << temp->data << " | Position : " << x
               << endl;
          delete temp;
        }
      }
    }
  }

  void insertatPos(int x, int n) {
    if (len() < n) {
      cout << "Enter valid position." << endl;
    } else {
      if (len() == n) {
        insertatTail(x);
      } else {
        if (n == 1) {
          insertatHead(x);
        } else {
          Node *newnode = new Node(x);
          Node *temp = head;
          for (int i = 1; i < n - 1; i++) {
            temp = temp->next;
          }
          newnode->next = temp->next;
          temp->next = newnode;
        }
      }
    }
  }

  List cp() {
    List xerox;
    Node *temp = head;
    while (temp != nullptr) {
      xerox.insertatTail(temp->data);
      temp = temp->next;
    }
    return xerox;
  }

  List rev() {
    List rev_list;
    for (int i = len(); i >= 1; i--) {
      rev_list.insertatTail(valueatPos(i));
    }
    return rev_list;
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

  List mergee(List x) {
    List sum;
    sum = cp();
    sum.tail->next = x.cp().head;
    return sum;
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
  num.display();
  List x = num.rev();
  x.display();
  List sum = num.mergee(x);
  sum.display();
  return 0;
}
