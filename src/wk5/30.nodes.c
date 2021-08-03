// Find number of nodes in a linked list

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
// Count the number of nodes in a linked list
int countNodes(struct node *list);
// Free Linked List
void freeLinkedList(struct node *list);

int main(void) {
  struct node *list = NULL;
  // Initialize nodes
  struct node *tail; // Current node
  struct node *temp; // Temporary node
	int nodes; // nodes in a linked list

  // User to determine size / length of linked list
  int list_size;
  printf("How many nodes in list? ");
  scanf("%i", &list_size);

  list = createList(list_size, list, temp, tail);
  if (list == NULL) {
    return 1;
  }

  // Traverse linked list
  traverseLinkedList(list);

	// Find total number of nodes in a linked list
	nodes = countNodes(list);
	printf("Total Node: %i\n", nodes);

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

int countNodes(struct node *list) {
	int count = 0;
	while(list != NULL) {
    count += 1;
    list = list->next;
  }
	return count;
}

void freeLinkedList(struct node *list) {
  // Free linked list
  while (list != NULL) {
    node *temp = list->next;
    free(list);
    list = temp;
  }
}
