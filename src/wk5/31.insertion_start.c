// Insert a node at the beginning of a linked list

#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int number;
	struct node *next;
} node;

// Create Linked List
node *createList(int n, struct node *list, struct node *temp, struct node *tail);
// Traverse Linked List
void traverseLinkedList(struct node *list);
// Insert new node at the beginning
node *insertNodeStart(struct node *head);
// Free Linked List
void freeLinkedList(struct node *list);

int main(void) {
  struct node *list = NULL;
  // Initialize nodes
  struct node *head;
  struct node *tail; // Current node
  struct node *temp; // Temporary node

  // User to determine size / length of linked list
  int list_size;
  printf("How many nodes in list? ");
  scanf("%i", &list_size);

  list = createList(list_size, list, temp, tail);
  if (list == NULL) {
    return 1;
  }

  // set head node;
  head = list;

  // Insert a node at the start of linked list
  list = insertNodeStart(head);
  if (list == NULL) {
    return 1;
  }

  // Traverse linked list
  traverseLinkedList(list);

  freeLinkedList(list);
}

node *createList(int n, struct node *list, struct node *temp, struct node *tail) {
  list = NULL;
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
  printf("\nTraverse Linked List\n");
  while(list != NULL) {
    printf("%i\n", list->number);
    list = list->next;
  }
}

// Insert a node at the start
node *insertNodeStart(struct node *head) {
  // Allocate memory
  struct node *new_node = malloc(sizeof(node));
  if (new_node == NULL) {
    return NULL;
  }
  // insert new node value
  printf("\nNew Node Value to Insert: ");
  scanf("%i", &new_node->number);
  // Point next of new node to head
  new_node->next = head;
  // change head to point to new node
  head = new_node;
  return head;
}

void freeLinkedList(struct node *list) {
  // Free linked list
  while (list != NULL) {
    node *temp = list->next;
    free(list);
    list = temp;
  }
}
