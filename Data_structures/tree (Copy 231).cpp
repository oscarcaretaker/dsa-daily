#include <iostream>
#include <vector>
using namespace std;

// NODE OF BINARY TREE
class Node {
public:
  int data;
  Node *left;
  Node *right;

  Node(int val) {
    data = val;
    left = nullptr;
    right = nullptr;
  }
};

// PREORDER TREE BUILDER -------------------------------------
Node *buildTree(vector<int> preorder);

static int idx = -1;
Node *buildTree(vector<int> preorder) {

  idx++;
  if (preorder[idx] == -1)
    return nullptr;

  Node *root = new Node(preorder[idx]);
  root->left = buildTree(preorder);
  root->right = buildTree(preorder);

  return root;
}
// -----------------------------------------------------------

void preorder_traversal(Node *root) {
  if (root == nullptr) {
    cout << "-1 ";
    return;
  }
  cout << root->data << " ";
  preorder_traversal(root->left);
  preorder_traversal(root->right);
}

void insert(int x) {
  if
    if (root == nullptr) {
      root->data = x;
      return 0;
    }
}

int main() {

  vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

  Node *root = buildTree(preorder);

  preorder_traversal(root);
}
