/*#include<stdio.h>
#include<stdlib.h>


struct node {
	int data;
	struct node* left;
	struct node* right;
};

struct node *newNode(int data) {
	struct node* new = (struct node*)malloc(sizeof(struct node));
	//node türünden yeni bir değişken oluşturduk 

	new->data = data;
	new->left = NULL;
	new->right = NULL;

	return new;
}

int main() {
	struct node* root = newNode(1);
	
	root->left = newNode(2);
	root->right = newNode(3);

	root->left->left = newNode(4);
	root->left->right = newNode(5);

	root->right->left = newNode(6);
	root->right->right = newNode(7);

	printf("Root: %d\n", root->data);
	printf("Root->left: %d\n", root->left->data);
	printf("Rot->right:%d\n", root->right->data);

	printf("Root->left->left: %d\n", root->left->left->data);
	printf("Root->Right->Right:%d\n", root->right->right->data);

	return 1;
}*/