/*
#include <stdio.h>
#include <stdlib.h>

//3. Hafta 

struct node
{
	int data;
	struct node* next;
};

struct node* newNode(int x)
{
	struct node* yeni = (struct node*)malloc(sizeof(struct node));
	yeni->data = x;
	yeni->next = NULL;
	return yeni;
}

void basaEkle(struct node** head, int item) {
	struct node* yeni = (struct node*)malloc(sizeof(struct node));
	yeni->data = item;
	yeni->next = *head;
	*head = yeni;
}

void printList(struct node* head) {
	struct node* tmp = head;
	while (tmp != NULL) {
		printf("%d\t", tmp->data);
		tmp = tmp->next;
	}
}
void arayaEkle(struct node* head, int item, int y) {
	struct node* yeni = newNode(item);
	struct node* tmp = head;
	while (tmp->data != y) {
		tmp = tmp->next;
	}
	yeni->next = tmp->next;
	tmp->next = yeni;
}

//bu fonk. çevrimsel baðlý liste baþýndan eleman siler.
void bastanSil(struct node** head) {
	struct node* tmp = *head;
	*head = tmp->next;
	free(tmp);
}

void printList(struct node* head) {
	struct node* tmp = head;
	do {
		printf("%d\t", tmp->data);
		tmp = tmp->next;
	} while (tmp != head);
	printf("\n");
}

void sonaEkle(struct node* head, int x) {
	struct node* yeni = newNode(x);
	struct node* tmp = head;
	while (tmp->next != NULL) {
		tmp = tmp->next;
	}
	tmp->next = yeni;
	yeni->next = head;
}

void ortadanSil(struct node** head) {
	struct node* tmp = *head;
	while (tmp->next != *head)
		tmp = tmp->next;
	struct node* tmp2 = tmp->next;
	*head = tmp->next;
	free(tmp2);
}

int main()
{
	struct node* yeni1 = (struct node*)malloc(sizeof(struct node));
	struct node* yeni2 = (struct node*)malloc(sizeof(struct node));
	struct node* yeni3 = (struct node*)malloc(sizeof(struct node));
	yeni1->data = 5; yeni2->data = 10; yeni3->data = 15;
	yeni1->next = yeni2; yeni2->next = yeni3; yeni3->next = yeni1;
	basaEkle(&yeni1, 20);
	arayaEkle(yeni1, 30, 10);
	sonaEkle(yeni1, 50);
	printList(yeni1);
	ortadanSil(&yeni1);
	printList(yeni1);
	return 0;
}
*/