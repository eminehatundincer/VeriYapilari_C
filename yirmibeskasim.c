#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node* right;
	struct node* left;
};

struct node* newNode(int x) {
	struct node* yeni = (struct node*)malloc(sizeof(struct node));
	yeni->data = x;
	yeni->left = NULL;
	yeni->right = NULL;
}
int main() {
	struct node* tree = newNode(5);
	tree->left = newNode(8);
	tree->right = newNode(10);
	tree->right->right = newNode(19);
	printf("Sağın sağı = %d\n", tree->right->right->data);
	return 0;
}