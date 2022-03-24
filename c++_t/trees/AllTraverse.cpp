#include <bits/stdc++.h>

using namespace std;

struct Node {
  int data;
  Node *left, *right;
  Node(int data) : data(data), left{nullptr}, right{nullptr} {}
};

int maxPathSum(Node* root, int& sum) {
  if (!root) return 0;

  return root->data +
         max(maxPathSum(root->left, sum), maxPathSum(root->right, sum));
}

int findHeight(Node* root) {
  if (root == nullptr) return 0;

  return 1 + max(findHeight(root->left), findHeight(root->right));
}

int main() {
  // Node* root = new Node(3);
  // cout << "root: " << root->data << '\n';
  if (sizeof(int) == sizeof(long))
    cout << "Eqal\n";
  else
    cout << "not eqal\n";
  return 0;
}
