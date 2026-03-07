#include <iostream>
using namespace std;

// Tree node
struct Node {
    int data;
    Node* left;
    Node* right;
};

// New node create karne ka function
Node* createNode(int val) {
    Node* newNode = new Node();
    newNode->data = val;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Inorder traversal (Left Root Right)
void inorder(Node* root) {
    if(root == NULL) return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    // Simple tree manually bana rahe
    Node* root = createNode(10);
    root->left = createNode(5);
    root->right = createNode(20);

    cout << "Inorder: ";
    inorder(root);
}

