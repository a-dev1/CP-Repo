#include <bits/stdc++.h>

using namespace std;

struct Node {
  int data;
  Node *left, *right;
  Node(int data) : data(data), left{nullptr}, right{nullptr} {}
};

int findHeight(Node* root) {
  if (root == nullptr) return 0;

  return 1 + max(findHeight(root->left), findHeight(root->right));
}

int main() {
  Node* root = new Node(3);
  cout << "root: " << root->data << '\n';

  return 0;
}