#include<stdlib.h>
#include<stdio.h>

struct node 
{
	int data;
	struct node* left;
	struct node* right;
};

struct node* newNode(int x) 
{
	struct node* yeni = (struct node*)malloc(sizeof(struct node));
	yeni->data = x;
	yeni->left = NULL;
	yeni->right = NULL;
}

void inorder(struct node* root) 
{
	if (root == NULL)
		return;
	inorder(root->left);
	printf("%d\t", root->data);
	inorder(root->right);
}

void printLevel(struct node* root, int level) 
{
	if(root == NULL)
	{
		return 0;
	}
	if (level == 1) 
	{
		printf("%d\t", root->data);
	}
	else 
	{
		printLevel(root->left, level - 1);
		printLevel(root->right, level - 1);
	}
}

int cHeight(struct node* root) 
{
	if (root == NULL) 
	{
		return 0;
	}
	else
	{
		int lheight = cHeight(root->left);
		int rheight = cHeight(root->right);
		printf("Ara yükseklik sol = %d\n", lheight);
		printf("Ara yükseklik sag = %d\n", rheight);
		if (lheight > rheight) 
			return (lheight + 1);
		else 
			return (rheight + 1);
	}
}

int main() 
{
	/*struct node* tree = newNode(5);
	tree->left = newNode(8);
	tree->left->left = newNode(15);
	tree->right = newNode(10);
	tree->right->right = newNode(19);
	tree->right->left = newNode(29);*/

	//İKİLİ ARAMA AĞACI = 4
	struct node* tree = newNode(10);
	tree->left = newNode(8);
	tree->left->left = newNode(5);
	tree->right = newNode(15);
	tree->right->right = newNode(19);
	tree->right->right->right = newNode(29);

	printf("Sagin sagi = %d\n", tree->right->right->data);
	inorder(tree);
	printf("\n");
	printf("Agacin yuksekligi= %d\n", cHeight(tree));
	//printLevel(tree, 3);
	//printLevel(tree, 2);

	return 0;
}
