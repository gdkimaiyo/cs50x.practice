// Insert a node at the beginning of a linked list

#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int number;
	struct node *next;
} node;

int main(void) {
  struct node *list = NULL;
  // Initialize nodes
  struct node *tail; // Current Node
  struct node *temp; // Temporary Node

  // User to determine size / lengthy of linked list
  int list_size;
  printf("How many nodes in list? ");
  scanf("%i", &list_size);

  for(int i = 1; i <= list_size; i++) {
    // allocate memory to store current node / tail
    tail = malloc(sizeof(node));
    if (tail == NULL) {
      return 1;
    }
    // Prompt for linked list node value
    printf("Input Node %i Value: ", i);
    scanf("%i", &tail->number);

    if (i == 1) {
      // Set head node value
      temp = list = tail;
    } else {
      temp->next = tail;
      temp = tail;
    }
  }

  // Insert a node at the start
  // allocate memory
  node *new_node = malloc(sizeof(node));
  // store number
  new_node->number = 12;
  // Point next of new node to head
  struct node *head = list;
  new_node->next = head;
  // change head to point to new node
  head = new_node;

  printf("\nTraverse Linked List\n");
  while(head != NULL) {
    printf("%i\n", head->number);
    head = head->next;
  }

  // Free linked list
  while (list != NULL) {
    node *temp = list->next;
    free(list);
    list = temp;
  }
}
