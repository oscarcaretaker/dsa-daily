#include <iostream>
using namespace std;

// Queue node
struct Node {
    int data;
    Node* next;
};

Node* frontNode = NULL;
Node* rearNode = NULL;

// Enqueue (queue ke end me add)
void enqueue(int val) {
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = NULL;

    if(rearNode == NULL) {
        frontNode = rearNode = newNode;
        return;
    }

    rearNode->next = newNode;
    rearNode = newNode;
}

// Dequeue (front se remove)
void dequeue() {
    if(frontNode == NULL) {
        cout << "Queue Empty\n";
        return;
    }

    Node* temp = frontNode;
    cout << "Removed: " << temp->data << endl;
    frontNode = frontNode->next;

    if(frontNode == NULL) rearNode = NULL;
    delete temp;
}

// Display queue
void display() {
    Node* temp = frontNode;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);
    display();
    dequeue();
}

