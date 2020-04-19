/*
 * Assignment 9, ICS212 - Tree
 * Caleb Cheshire
 * Date Created: 28 March 2020
 * Purpose: Create and use a BST in a C program.
 */

#include<stdio.h>
#include<stdlib.h>

struct node {
	int val;
	struct node *l;
	struct node *r;
} *root = NULL, *temp = NULL;

void insert();
void create();
void search(struct node *t);
void preorderTraverse(struct node *t);
int searchTree(struct node *head, int element);

void main() {
	int a;
	int element, flag;

	printf("MENU: ");
	printf("\nPress 1 to add a number to the tree \n");
	printf("Press 2 to display the tree, using a preorder traversal\n");
	printf("Press 3 to search for a number in the tree\n");
	printf("Press 4 to exit\n");

	while(1) {
		printf("\nEnter your choice: ");
		scanf("%d", &a);

		switch (a) {
			case 1:
			insert();
			break;
		
			case 2:
			preorderTraverse(root);
			break;

			case 3:
			printf("\nEnter the element you're looking for: ");
			scanf("%d", &element);
			flag = searchTree(root, element);

			if (flag) {
				printf("Element was found in the tree\n");
			} else {
				printf("Element was not found in the tree\n");
			}
			break;

			case 4:
			exit(0);
	
			default :
			printf("That's not a valid option. Please enter a valid option");
			break;
		}
	}
}

/* Inserts node into tree */
void insert() {
	create();
	
	if (root == NULL) {
		root = temp;
	} else {
		search(root);
	}
}

/* Creates node */
void create() {
	int data;

	printf("Enter data of the node you want to insert : ");
	scanf("%d", &data);
	temp = (struct node *) malloc(1*sizeof(struct node));
	temp -> val = data;
	temp -> l = temp -> r = NULL;
}

void search(struct node *t) {
	if ((temp -> val > t -> val) && (t -> r != NULL)) {
		search(t -> r);
	} else if ((temp -> val > t -> val) && (t -> r == NULL)) {
		t -> r = temp;
	} else if ((temp -> val < t -> val) && (t -> l != NULL)) {
		search(t->l);
	} else if ((temp -> val < t -> val) && (t -> l == NULL)) {
		t -> l = temp;
	}
}

/* Display preorder traversal */
void preorderTraverse(struct node *t) {
	if (root == NULL) {
		printf("There are no elements to display");
		return;
	}

	printf("%d -> ", t -> val);

	if (t->l != NULL) {
		preorderTraverse(t -> l);
	}

	if (t -> r != NULL) {
		preorderTraverse(t -> r);
	}
}

/* Search the element in the BST */
int searchTree(struct node *head, int key) {
	while (head != NULL) {
		
		if (key > head -> val) {
			return searchTree(head -> r, key);

		} else if (key < head -> val) {
			return searchTree(head -> r, key);

		} else if (key < head -> val) {
			return searchTree(head -> l, key);

		} else {
			return 1;
		}	
	}
	
	return 0;
}