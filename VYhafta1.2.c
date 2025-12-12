/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct node {
	int data;
	struct node* next;
};

struct node* newNode(int x) {
	struct node* yeni = (struct node*)malloc(sizeof(struct node));
	yeni->data = x;
	yeni->next = NULL;
	return yeni;
}

//BAÐLI LÝSTEDE BÝRÝNCÝ ELEMANI SÝLEN FONKSÝYON
void basSil(struct node** head) {
	struct node* tmp = *head;
	*head = tmp->next;
	free(tmp);
}

//BAÐLI LÝSTEDE ÝTEM ÝLE VERÝLEN ELEMANI SÝLEN FONKSÝYON
void ortSil(struct node* head, int item) {
	struct node* tmp = head;
	struct node* tmp2 = tmp -> next;
	while (tmp->next->data != item  && tmp-> next != NULL) {
		tmp = tmp->next;
	}
	tmp2->next = tmp->next->next;
	free(tmp2);
}

//BAÐLI LÝSTEDE SONDAKÝ ELEMANI SÝLEN FONKSÝYON
void sonSil(struct node* head) {
	struct node* tmp = head;
	while (tmp->next->next != NULL) {
		tmp = tmp->next;
	}
	free(tmp->next);
	tmp->next = NULL;
}


//BAÐLI LÝSTEYÝ TERSTEN YAZDIRMAK ÝÇÝN GEREKLÝ FONKSÝYON
void tersCevir(struct node** head) {
	struct node* tmp, * tmp2, * tmp3;
	tmp = *head;
	tmp2 = NULL;
	while (tmp != NULL) {
		tmp3 = tmp2;
		tmp2 = tmp;
		tmp = tmp->next;
		tmp2->next = tmp3;
	}
	*head = tmp2;
}

//BAÐLI LÝSTEYÝ YAZDIRAN FONKSÝYON
void printList(struct node* head) {
	struct node* tmp = head;
	while (tmp != NULL) {
		printf("%d\t", tmp->data);
		tmp = tmp->next;
	}
	printf("\n");
}

int main() {
	struct node* yeni1 = newNode(5);
	struct node* yeni2 = newNode(10);
	struct node* yeni3 = newNode(15);
	struct node* yeni4 = newNode(20);

	yeni1->next = yeni2; yeni2->next = yeni3; yeni3->next = yeni4; yeni4->next = NULL;
	printf("Orijinal Liste:\n");
	printList(yeni1);

	basSil(&yeni1); //HEAD DEÐÝÞTÝÐÝ ÝÇÝN & ÝÞARETÝ GEREKLÝDÝR.
	printf("Baþý sildikten sonra: ");
	printList(yeni1); // 10 15 20

	// 'ortSil(yeni1, 10)' çaðrýsý HATA verir, çünkü bu fonksiyon baþý silemez.
	// Mantýklý olan çaðrý '15'i silmektir.
	ortSil(yeni1, 15);
	printf("Ortadan '15'i sildikten sonra: ");
	printList(yeni1); // 10 20
	
	sonSil(yeni1);
	printf("Sonu sildikten sonra: ");
	printList(yeni1); // 10
	
	tersCevir(&yeni1);
	printf("Ters cevirdikten sonra: ");
	printList(yeni1); // 10

	return 0;

}*/
