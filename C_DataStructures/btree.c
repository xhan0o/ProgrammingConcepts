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

//Post order traversal
void postOrder(struct node* node){
  if (node == NULL)
    return;
  postOrder(node->left);
  postOrder(node->right);
  printf("%d",node->data);
}

//pre order traversal
void preOrder(struct node* node){
  if (node == NULL)
    return;
  printf("%d",node->data);
  preOrder(node->left);
  preOrder(node->right);
}

//Driver code
int main(){
  struct node *root = newNode(1);

  root -> left = newNode(2);
  root -> right = newNode(3);
  printInorder(root);
  printf("\n");
  postOrder(root);
  printf("\n");
  preOrder(root);
  return 0;
}
