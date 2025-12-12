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
	if (root == NULL)
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
		/*printf("Ara yükseklik sol = %d\n", lheight);
		printf("Ara yükseklik sag = %d\n", rheight);*/
		if (lheight > rheight)
			return (lheight + 1);
		else
			return (rheight + 1);
	}
}

struct node* insert(struct node* root, int key) {
	if (root == NULL) {
		return newNode(key);
	}
	if (root->data < key) {
		root->right = insert(root->right, key);
	}
	if (root->data > key){
		root->left = insert(root->left, key);
	}
		return root;
}

struct node* search(struct node *root, int key) {
	if (root == NULL || root->data == key) {
		return root;
	}
	if (root->data < key) {
		return(search(root->right, key));
	}
	return (search(root->left, key));
}

int isBalanced(struct node* root) {
	if (root == NULL)
		return 1;
	int lHeight = cHeight(root->left);
	int rHeight = cHeight(root->right);
	if (abs(lHeight - rHeight) > 1) {
		return 0;
	}
	else {
		return isBalanced(root->left) && isBalanced(root->right);
	}
}

int main()
{
	struct node *tree = NULL;
	tree = insert(tree, 12);
	insert(tree, 10);
	insert(tree, 15);
	insert(tree, 4);
	insert(tree, 19);
	//insert(tree, 17); bunu eklersen ağaç dengesiz oluyor.

	//printLevel(tree,2);
	inorder(tree); //ağacı oluşturur
	
	struct node *bulunan = search(tree, 15);
	if (bulunan != NULL)
		printf("Bulunan değer: %d\n", bulunan->data);
	else
		printf("Bulunan NULL");

	int sonuc = isBalanced(tree);
	if (sonuc == 1) {
		printf("Ağaç Dengeli");
	}
	else {
		printf("Ağaç Dengesiz");
	}

	return 0;
}
