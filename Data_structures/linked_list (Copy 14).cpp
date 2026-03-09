#include <iostream>
using namespace std;

// Node structure (har element ke liye)
struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

// Insert at beginning
void insert(int val) {
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = head; // purane head ko next bana diya
    head = newNode;       // new node ab head hai
}

// Display list
void display() {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main() {
    insert(10);
    insert(20);
    insert(30);
    display();
}

