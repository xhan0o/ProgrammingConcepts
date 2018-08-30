#include <stdio.h>
#include <stdlib.h>

struct node{
  int data;
  struct node *left, *right;
};

//Creating new node in BST
struct node *newNode(int data){
  struct node *temp = (struct node *) malloc(sizeof(struct node));
  temp->data = data;
  temp->left = temp->right = NULL;
  return temp;
}

//Inserting new node in tree
struct node* insert(struct node* node, int data){
  //If tree empty, return new node
  if (node == NULL) return newNode(data);

  //Recur down to tree for adding new Node
  if (data < node->data)
    node->left = insert(node->left, data);
  else if (data > node->data)
    node->right = insert(node->right, data);

  //return the node pointer
  return node;
}

//Inorder traversal
// left center right
void printInorder(struct node* node){
  if (node == NULL)
    return;
  printInorder(node->left);
  printf("%d",node->data);
  printInorder(node->right);
}

int main(){
  struct node *root = NULL;
  root = insert(root,50);
  insert(root, 30);
  insert(root, 20);
  insert(root, 40);
  insert(root, 70);
  insert(root, 60);
  insert(root, 80);
  printInorder(root);
}
