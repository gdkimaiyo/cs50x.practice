// Delete a node at the end of a linked list

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
// Delete node at the end
node *deleteNodeEnd(struct node *list);
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

	// Traverse linked list before deletion
  printf("\nLinked List. Before Deletion\n");
  traverseLinkedList(list);

  // delete a node at the end of linked list
  list = deleteNodeEnd(list);
  if (list == NULL) {
    return 1;
  }

	// Traverse linked list after deletion
  printf("\nLinked List. After Deletion\n");
  traverseLinkedList(list);

  freeLinkedList(list);
}

node *createList(struct node *list, struct node *temp, struct node *tail) {
  list = NULL;
  // User to determine size / length of linked list
  int n;
  printf("Create a Linked List\nHow many nodes in list? ");
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

// delete a node at the end
node *deleteNodeEnd(struct node *list) {
  // create a temp node to hold current tail node
  struct node *temp = list;
	// Traverse to the second last node
  while(temp->next->next != NULL) {
    temp = temp->next;
  }
	// change second last next to NULL
  temp->next = NULL;

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
