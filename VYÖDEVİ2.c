/*#include <stdio.h>
#include <stdlib.h>
#include<limits.h>

//YIÐIN YAPISI ÝÇÝN
struct stack {
	unsigned capacity;
	int top;
	int* array;
};

//TEK YÖNLÜ BAÐLI LÝSTE ÝÇÝN
struct teknode {
	int data;
	struct teknode* next;
};

//ÇÝFT YÖNLÜ BAÐLI LÝSTE ÝÇÝN
struct ciftnode {
	int data;
	struct ciftnode* next;
	struct ciftnode* prev;
};
 
//YIÐIN OLUÞTURMAK ÝÇÝN
struct stack* createStack(unsigned capacity) {
	struct stack* yeni = (struct stack*)malloc(sizeof(struct stack));
	yeni->top = -1;
	yeni->capacity = capacity;
	yeni->array = (int*)malloc(sizeof(int) * yeni->capacity);
	return yeni;
}

//YIÐININ EN ÜSTÜNE ELEMAN EKLEME
void push (struct stack* yeni,int x ){
	yeni->top = yeni->top + 1;
	yeni->array[yeni->top] = x;
}


struct teknode* newTekNode(struct teknode** head, int x) {
	struct teknode* yeni = (struct teknode*)malloc(sizeof(struct teknode));

	//tek yönlü baðlý listeye eleman ekleme
	yeni->data = x;
	yeni->next = NULL;
	if (*head == NULL) {
		*head = yeni;
	}
	else {
		struct teknode* tmp = *head;
		while (tmp->next != NULL) {
			tmp = tmp->next;
		}
		tmp->next = yeni;
	}
	return yeni;
}

//çift yönlü baðlý listeye eleman ekleme
struct ciftnode* newCiftNode(struct ciftnode** head, int x) {
	struct ciftnode* yeni = (struct ciftnode*)malloc(sizeof(struct ciftnode));
	yeni->data = x;
	yeni->next = yeni->prev = NULL;
	if (*head == NULL) {
		*head = yeni;
	}
	else {
		struct ciftnode* tmp = *head;
		while (tmp->next != NULL) {
			tmp = tmp->next;
		}
		tmp->next = yeni;
		yeni->prev = tmp;
	}
	return yeni;
}

//tek yönlü baðlý listeyi yazdýr
void printTekList(struct teknode* head) {
	struct teknode* tmp = head;
	while (tmp != NULL) {
		printf("%d \t ", tmp->data);
		tmp = tmp->next;
	}
	printf("\n");
}

//çift yönlü baðlý listeyi yazdýr
void printCiftList(struct ciftnode* head) {
	struct ciftnode* tmp = head;
	while (tmp != NULL) {
		printf("%d \t ", tmp->data);
		tmp = tmp->next;
	}
}

//main fonksiyonu
int main() {
	int sayi, deger;
	printf("Yýðýndaki eleman sayýsýný giriniz:");
	scanf("%d", &sayi);

	struct stack* yeni = createStack(sayi);

	//Yýðýna eleman ekleme
	for (int i = 0; i < sayi; i++) {
		printf("Yýðýna eklenecek %d. elemaný giriniz:" , (i+1));
		scanf("%d", &deger);
		push(yeni, deger);
	}

	if (sayi % 2 == 0) {
				printf("Yýðýn çift sayýda eleman içeriyor. Tek yönlü baðlý listeye dönüþtürülüyor...");
				struct teknode* head = NULL;
				//Yýðýndan tek yönlü baðlý listeye eleman ekleme
				for (int i = yeni->top; i >= 0; i--) {
					newNode(&head, yeni->array[i]);
				}
				printf("\nTek yönlü baðlý liste elemanlarý:\n");
				printTekList(head);
	}
	else {
		printf("Yýðýn tek sayýda eleman içeriyor. Çift yönlü baðlý listeye dönüþtürülüyor...");
				struct ciftnode* chead = NULL;
				//Yýðýndan çift yönlü baðlý listeye eleman ekleme
				for (int i = yeni->top; i >= 0; i--) {
					newCiftNode(&chead, yeni->array[i]);
				}
				printf("\nÇift yönlü baðlý liste elemanlarý:\n");
				printCiftList(chead);
	}
	return 0;
}*/