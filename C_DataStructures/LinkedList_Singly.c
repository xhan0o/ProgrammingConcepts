#include <stdio.h>
#include <stdlib.h>

struct Node{
  int data;
  struct Node *next;
};

void printList(struct Node *n){
  while (n != NULL){
    printf(" %d ", n->data);
    n = n->next;
  }
}

/*Add a node at the front ( 4 step)
Allocate new node,
Put in the data,
Make next of new node current head,
Move head to the new node*/
void push (struct Node** head_ref, int new_data){
  struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
  new_node->data = new_data;
  new_node->next = (*head_ref);
  (*head_ref) = new_node;
}

/*Insert after given node (5 step)
Check given previous node is NULL
allocate new node
put in the data
make next of new node as next of previous node
move the next of previous node as new node */
void insetAfter(struct Node* prev_node, int new_data){
  if (prev_node == NULL){
    printf("Given node is NULL");
    return;
  }
  struct Node* new_node = (struct Node*) malloc(sizeof (struct Node));
  new_node-> data = new_data;
  new_node->next = prev_node->next;
  prev_node->next = new_node;
}

/*Adding node at end (6 steps)
Allocate node
Put in datat
Make the node->next NULL as it will be new last nodes
If linklist is empty, make the new node head
else traverse the linkedlist to the end
Chance next of the last node to new node*/
void append(struct Node** head_ref, int new_data){
  struct Node* new_node = (struct Node*) malloc(sizeof (struct Node));
  struct Node *last = *head_ref;
  new_node-> data = new_data;
  new_node->next = NULL;
  if (*head_ref == NULL){
    *head_ref = new_node;
    return;
  }
  while(last->next != NULL)
    last = last->next;
  last->next = new_node;
  return;
}

int main(){
  //Simple declaration of 3 node linked list
  struct Node* head = NULL;
  struct Node* second = NULL;
  struct Node* third = NULL;
  // allocating nodes in heap
  head  = (struct Node*)malloc(sizeof(struct Node));
  second  = (struct Node*)malloc(sizeof(struct Node));
  third  = (struct Node*)malloc(sizeof(struct Node));
  //Addind data to nodes
  head->data = 1;
  head->next = second;
  second->data = 2;
  second->next = third;
  third->data = 3;
  third->next = NULL;

  //different methods
  //Insert 0 at begining
  push(&head,0);
  //Insert 5 after 'second' node
  insetAfter(second, 5);
  // Insert 8 at end of linked List
  append(&head,8);


  printList(head);
  return 0;

}
