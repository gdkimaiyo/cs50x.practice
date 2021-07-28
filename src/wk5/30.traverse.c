// Create and Traverse a linked list

#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int number;
	struct node *next;
} node;

int main(void) {
	struct node *head; // Head node. First Node
  struct node *tail; // Current Node
  struct node *temp; // Temporary node

  int list_size;
  printf("How many elements in list? ");
  scanf("%i", &list_size);

	for(int i=1 ; i <= list_size; i++) {
    tail = (node *)malloc(sizeof(node));
    if (tail == NULL) {
      return 1;
    }

    printf("Input Node Value %i: ", i);
    scanf("%i", &tail->number);

		if(i == 1) {
			head = temp = tail;
		} else {
			temp->next = tail;
			temp = tail;
		}
	}

  // last node to point to NULL
	temp->next = NULL;
	temp = head;

	printf("\nTraverse Linked List\n");
	while(head != NULL){
		printf("%d\n", head->number);
		head = head -> next;
	}
}
