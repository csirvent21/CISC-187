#include <iostream>
using namespace std;

struct Node{
int val;
Node* right;
Node* left;
};


Node* createNode(int val){
  Node* newNode = new Node();
  newNode->val = val;
  newNode->left = NULL;
  newNode->right = NULL;
  return newNode;
}

Node* insert(Node* root, int val){
  if(root == NULL){
    return createNode(val);
  }
  if(val < root->val){
    root->left = insert(root->left, val);
  }
  else{
    root->right = insert(root->right, val);
  }
  return root;
}

//Task 3
int findGreatest(Node* root){
  if(root == NULL){
    return -1;
  }
  while(root->right != NULL){
    root = root->right;
  }
  return root->val;
}

int main() {
  
  int array[] = {1, 5, 9, 2, 4, 10, 6, 3, 8};
  Node* root = NULL;
  for (int i = 0; i < 9; i++) {
    root = insert(root, array[i]);
  }

  cout << findGreatest(root);
}