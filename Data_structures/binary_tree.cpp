#include <iostream>
#include <vector>
using namespace std;

int idx = -1;

class BinaryNode {
private:
  int key;
  BinaryNode *left;
  BinaryNode *right;

  BinaryNode(int x) {
    key = x;
    left = right = nullptr;
  }

public:
  static BinaryNode *buildTree(vector<int> &arr) {
    idx++;
    if (idx >= arr.size() || arr[idx] == -1) {
      return nullptr;
    }
    BinaryNode *root = new BinaryNode(arr[idx]);
    root->left = buildTree(arr);
    root->right = buildTree(arr);

    return root;
  }

  static void printTree(BinaryNode *root) {
    if (root == nullptr) {
      cout << " -1";
      return;
    }
    cout << " " << root->key;
    printTree(root->left);
    printTree(root->right);
  }

  static void printGTree(BinaryNode *root, string indent = "",
                         bool isLeft = true) {
    if (root == nullptr)
      return;

    cout << indent;

    if (indent != "") {
      if (isLeft)
        cout << "├── ";
      else
        cout << "└── ";
    }

    cout << root->key << endl;

    // increase indentation
    string newIndent = indent + (isLeft ? "│   " : "    ");

    printGTree(root->left, newIndent, true);
    printGTree(root->right, newIndent, false);
  }
};
int main() {
  vector<int> arr = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
  BinaryNode *x = BinaryNode::buildTree(arr);
  //  BinaryNode::printTree(x);
  BinaryNode::printGTree(x);
  return 0;
}
