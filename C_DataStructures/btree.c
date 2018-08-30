#include <stdio.h>
#include <stdlib.h>

//Structure of the tree
struct node {
  int data;
  struct node *left;
  struct node *right;
};

//Adding new node to structure
struct node* newNode(int data){
  struct node* node = (struct node*)malloc(sizeof(struct node));
  node -> data = data;
  node -> left = NULL;
  node -> right = NULL;
  return (node);
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

//Driver code
int main(){
  struct node *root = newNode(1);

  root -> left = newNode(2);
  root -> right = newNode(3);
  printInorder(root);
  return 0;
}
