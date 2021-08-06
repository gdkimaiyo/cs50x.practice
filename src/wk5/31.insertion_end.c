// Insert a node at the end of a linked list

#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int number;
	struct node *next;
} node;

// Create Linked List
node *createList(struct node *list, struct node *temp, struct node *tail);
// Traverse Linked List
void traverseLinkedList(struct node *list);
// Insert new node at the end
node *insertNodeEnd(struct node *list);
// Free Linked List
void freeLinkedList(struct node *list);

int main(void) {
  struct node *list = NULL;
  // Initialize nodes
  struct node *tail; // Current node
  struct node *temp; // Temporary node

  list = createList(list, temp, tail);
  if (list == NULL) {
    return 1;
  }

	// Traverse linked list before insertion
  printf("\nLinked List. Before Insertion\n");
  traverseLinkedList(list);

  // Insert a node at the end of linked list
  list = insertNodeEnd(list);
  if (list == NULL) {
    return 1;
  }

	// Traverse linked list after insertion
  printf("\nLinked List. After Insertion\n");
  traverseLinkedList(list);

  freeLinkedList(list);
}

node *createList(struct node *list, struct node *temp, struct node *tail) {
  list = NULL;
  // User to determine size / length of linked list
  int n;
  printf("How many nodes in list? ");
  scanf("%i", &n);

  for(int i = 1; i <= n; i++) {
    // allocate memory to store current node / tail
    tail = malloc(sizeof(node));
    if (tail == NULL) {
      return (NULL);
    }
    // Prompt for linked list node value
    printf("Input Node %i Value: ", i);
    scanf("%i", &tail->number);

    if (i == 1) {
      temp = list = tail;
    } else {
      temp->next = tail;
      temp = tail;
    }
  }
  return list;
}

void traverseLinkedList(struct node *list) {
  while(list != NULL) {
    printf("%i\n", list->number);
    list = list->next;
  }
}

// Insert a node at the end
node *insertNodeEnd(struct node *list) {
  // Allocate memory
  struct node *new_node = malloc(sizeof(node));
  if (new_node == NULL) {
    return NULL;
  }
  // insert new node value
  printf("\nNew Node Value to Insert: ");
  scanf("%i", &new_node->number);
  // Point next of new node to NULL
  new_node->next = NULL;
  // create a temp node to hold current tail node
  struct node *temp = list;
  while(temp->next != NULL) {
    temp = temp->next;
  }
  temp->next = new_node;

  return list;
}

void freeLinkedList(struct node *list) {
  // Free linked list
  while (list != NULL) {
    node *temp = list->next;
    free(list);
    list = temp;
  }
}
