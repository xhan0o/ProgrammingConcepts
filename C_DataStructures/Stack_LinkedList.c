#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

//structure
struct StackNode {
  int data;
  struct StackNode* next;
};

//create new node with given data
struct StackNode* newNode(int data){
  struct StackNode* stackNode = (struct StackNode*) malloc(sizeof(struct StackNode));
  stackNode -> data = data;
  stackNode -> next = NULL;
  return stackNode;
}

//Empty check
int isEmpty(struct StackNode *root){
  return !root;
}

//Push, similar to adding new node in linked list at head
void push(struct StackNode** root, int data){
  struct StackNode* stackNode = newNode(data);
  stackNode -> next = *root;
  *root = stackNode;
  printf("%d pushed to stack\n",data);
}

//Pop, similar to removing node from linked list
int pop(struct StackNode** root){
  if (isEmpty(*root))
    return INT_MIN;
  struct StackNode* temp = *root;
  *root = (*root) -> next;
  int popped = temp->data;
  free(temp);
  printf("%d popped from stack \n", popped);
  return popped;
}

//Checking to head node.
int peek(struct StackNode* root){
  if (isEmpty(root))
    return INT_MIN;
  printf("%d peek \n", root-> data);
  return root-> data;
}


int main() {
  struct StackNode* root = NULL;
  peek(root);
  push(&root,10);
  peek(root);
  push(&root,20);
  peek(root);
  push(&root,50);
  peek(root);
  pop(&root);
  peek(root);
  return 0;
}
