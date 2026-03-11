#include <stdio.h>
#include <stdlib.h>

// NODE OF BINARY TREE
struct Node {
  int data;
  struct Node *left;
  struct Node *right;
};

// Global index (like static int idx in C++)
int idx = -1;

// Function to create new node
struct Node *createNode(int val) {
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  newNode->data = val;
  newNode->left = NULL;
  newNode->right = NULL;
  return newNode;
}

// PREORDER TREE BUILDER
struct Node *buildTree(int preorder[], int size) {
  idx++;

  if (idx >= size || preorder[idx] == -1)
    return NULL;

  struct Node *root = createNode(preorder[idx]);

  root->left = buildTree(preorder, size);
  root->right = buildTree(preorder, size);

  return root;
}

// PREORDER TRAVERSAL
void preorder_traversal(struct Node *root) {
  if (root == NULL) {
    printf("-1 ");
    return;
  }

  printf("%d ", root->data);
  preorder_traversal(root->left);
  preorder_traversal(root->right);
}

int main() {

  int preorder[] = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
  int size = sizeof(preorder) / sizeof(preorder[0]);

  struct Node *root = buildTree(preorder, size);

  preorder_traversal(root);

  return 0;
}
