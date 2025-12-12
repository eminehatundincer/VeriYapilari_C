/*#include <stdio.h>
#include <stdlib.h>
//4. hafta 
//*****ÇÝFT YÖNLÜ BAÐLI LÝSTE ÝÞLEMLERÝ*********

struct node {
	int data;
	struct node* next;
	struct node* prev;
};

struct node* newNode(int x) {
	struct node* yeni = (struct node*)malloc(sizeof(struct node));
	yeni->data = x;
	yeni->next = yeni->prev = NULL;
	return yeni;
}

//*****EKLEME FONKSÝYONLARI*****

void basaEKle(struct node** head, int x) {
	struct node* yeni = (struct node*)malloc(sizeof(struct node));
	yeni->data = x;
	yeni->next = *head;
	(*head)->prev = yeni;
	*head = yeni;
}

void arayaEkle(struct node* head, int x, int y) {
	struct node* yeni = newNode(x);
	struct node* tmp = head;
	while (tmp->data != y)
		tmp = tmp->next;
	yeni->next = tmp->next;
	yeni->prev = tmp;
	tmp->next = yeni;
	yeni->next->prev = yeni;
}

void sonaEkle(struct node* head, int x) {
	struct node* yeni = newNode(x);
	struct node* tmp = head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	yeni->prev = tmp;
	tmp->next = yeni;
}

//*******SÝLME FONKSÝYONLARI*********

void bastanSil(struct node** head) {
	struct node* tmp = *head;
	*head = tmp->next;
	// free(tmp); de olabilir dene
	(*head)->prev = NULL;
	free(tmp);
}

void aradanSil(struct node* head, int x) {
	struct node* tmp = head;
	while (tmp->data != x)
		tmp = tmp->next;
	tmp->prev->next = tmp->prev;
	tmp->prev->next = tmp->next;
	free(tmp);
}

//*******LÝSTEYÝ YAZDIRMA FONKSÝYONU*********
void printList(struct node* head) {
	struct node* tmp = head;
	while (tmp != NULL)
	{
		printf("%d\t", tmp->data);
		tmp = tmp->next;
	}
	printf("\n");
}


int main() {
	struct node* yeni1 = newNode(5);
	struct node* yeni2 = newNode(15);
	struct node* yeni3 = newNode(25);
	struct node* yeni4 = newNode(35);
	yeni1->next = yeni2; yeni2->next = yeni3; yeni3->next = yeni4;
	yeni2->prev = yeni1; yeni3->prev = yeni2; yeni4->prev = yeni3;
    
	//basaEkle(&yeni1,3);
	arayaEkle(yeni1, 33, 25);
	sonaEkle(yeni1,50);
	bastanSil(&yeni1);
	aradanSil(yeni1, 25);
	printList(yeni1);

	return 0;
}*/