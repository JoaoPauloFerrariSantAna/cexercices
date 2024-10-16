#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	struct Node* head;
	int value;
} Node;

Node * node_init() {
	Node* node;
	node = malloc(sizeof(Node));

	node->head = NULL;

	return node;
}

void show_options() {
	puts("Would you like to:");
	puts("0. Exit.");
	puts("1. Add number.");
	puts("2. Show numbers added.");
}

int get_number() {
	int num;

	printf("(type a number to add to the list) >>> ");
	scanf("%d", &num);

	return num;
}

void node_add_head(Node* node, int value) {
	Node *new_head;
	new_head = malloc(sizeof(Node));

	new_head->value = value;
	/* i need to make "head" look to where "node->head" is looking */
	new_head->head = node->head;
	/* now i need to set "node->head" to where "new_head" points to */
	/* because then, the head will have "updated" */
	node->head = new_head;
}

void ask_number(Node *node) {
	int number = get_number();
	node_add_head(node, number);
}

void node_print(Node* node) {
	puts("---------------------");
	puts("Typed numbers: ");
	while(node != NULL) {
		printf("%d\n", node->value);
		node = node->head;
	}
	puts("nill");
	puts("---------------------");
}

void init_app() {
	int op;
	Node *node;

	node = node_init();

	do {
		show_options();
		printf(">>> ");
		scanf("%d", &op);

		switch(op) {
			case 0:
			break;

			case 1:
				ask_number(node);
			break;

			case 2:
				node_print(node);
			break;

			default:
				puts("\nUnknown option.\n");
			break;
		}
	} while(op != 0);


	free(node);
	node = NULL;
}

/*
	a linked list that can look forwards and backwards
	i will first try to move only forwards
*/
int main() {
	init_app();

	return 0;
}
