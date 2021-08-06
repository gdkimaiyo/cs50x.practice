// Search for an element in a linked list

#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>

typedef struct node{
	int number;
	struct node *next;
} node;

// Create Linked List
node *createList(struct node *list, struct node *temp, struct node *tail);
// Element searching in a linked list
bool searchNode(struct node *list, int elm);
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

	// Get element to search in linked list
	int search_elm;
	printf("\nProvide search element: ");
  scanf("%i", &search_elm);

  // Search for a node in a linked list
	bool elmFound = false;
  elmFound = searchNode(list, search_elm);
  if (list == NULL) {
    return 1;
  }
	if (elmFound) {
		printf("Element found in linked list.\n");
	} else {
		printf("Element NOT found in linked list.\n");
	}

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

// Search for a node in a linked list
bool searchNode(struct node *list, int elm) {
	// create a temp node to hold current tail node
  struct node *temp = list;
  while(temp->next != NULL) {
		if (temp->number == elm) {
			return true;
		}
		temp = temp->next;
  }
	return false;
}

void freeLinkedList(struct node *list) {
  // Free linked list
  while (list != NULL) {
    node *temp = list->next;
    free(list);
    list = temp;
  }
}
