#include <iostream>
using namespace std;

// Stack node
struct Node {
    int data;
    Node* next;
};

Node* topNode = NULL;

// Push operation (stack me element add)
void push(int val) {
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = topNode;
    topNode = newNode;
}

// Pop operation (last inserted remove)
void pop() {
    if(topNode == NULL) {
        cout << "Stack Empty\n";
        return;
    }
    Node* temp = topNode;
    cout << "Popped: " << temp->data << endl;
    topNode = topNode->next;
    delete temp;
}

// Display stack
void display() {
    Node* temp = topNode;
    while(temp != NULL) {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int main() {
    push(5);
    push(10);
    push(15);
    display();
    pop();
}

