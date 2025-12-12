/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>


struct node {
	int data;
	struct node* next;
	struct node* prev;
};

//1.SORU
  //BÝR ÇÝFT YÖNLÜ BAÐLI LÝSTEDE ORTANCI ELEMANI BULUP SÝLEN FONKSÝYON

void ortancaSil(struct node* head) {
	struct node* tmp = head;
	int sayac = 0;
	int ortanca = 0;
	while (tmp != NULL) {
		sayac++;                 //sayaç yardýmý ile kaç tane elemaný olduðunu bulmamýz lazým
		tmp = tmp->next;
	}
	ortanca = (sayac / 2) + 1;  //ortacan saydðýmýz elemanýn bir fazlasý mesela 5 elemanlý olsun 2 ye boldük 2.5 int olduðu için 2 yi alýr ama bize 3 lazým


	sayac = 0; tmp = head;
	while (sayac != ortanca) {     //tmp yi istediðimiz düðüme getirmek için
		tmp = tmp->next;
		sayac++;
	}

	tmp->next->prev = tmp->prev;
	tmp->prev->next = tmp->next;
	free(tmp);

}

//2.SORU
//ÇÝFT YÖNLÜ BAÐLI LÝSTEDE ÝSTEDÝÐÝMÝZ N. ELAMANI SÝLEN FONKSÝYON
void istSil(struct node* head, int n) {
	struct node* tmp = head;
	int sayac = 1;
	while (sayac != n) {
		tmp = tmp->next;     //tmp yi istediðimiz düðüme getirdik
		sayac++;
	}

	tmp->next->prev = tmp->prev;
	tmp->prev->next = tmp->next;
	free(tmp);
}

//3.SORU
//ÇÝFT YÖNLÜ BAÐLI LÝSTEDE EÐER 2 TANE AYNI ELEMANDAN VARSA 2 SÝNÝ DE SÝLEN FONKSÝYON
void cSil(struct node* head) {
	struct node* i = head;
	struct node* j = head->next;
	struct node* tmp;

	while (i->next != NULL) {          //ÇÝFT DÖNGÜ YAPISI KURARAK TÜM DÜÐÜMLERDE GEZÝYORUZ
		while (j != NULL) {
			if (i->data == j->data) {         //Ý NÝN DATASI ÝLE J NÝN DATASI UYUÞTUÐU ZAMAN NORMAL SÝLME ÝÞLEMÝ YAPIYORUZ                          
				tmp = j;

				tmp->next->prev = tmp->prev;


				tmp->prev->next = tmp->next;

				i->next->prev = head;
				i->prev->next = j;

				continue;                      //ÝSTEDÝÐÝMÝZ DÜÐÜM ZATEN SÝLÝNDÝÐÝ ÝÇÝN BÝR DAHA DÖNGÜYE GÝRMESÝNE ÝHTÝYACIMIZ YOK
				free(tmp);
				free(i);
			} // if'i kapatýyoruz 
			j = j->next;
		}
		i = i->next;
		j = i->next;
	}

}

struct node* newNode(int x) {
	struct node* yeni = (struct node*)malloc(sizeof(struct node));
	yeni->data = x;
	yeni->next = yeni->prev = NULL;
	return yeni;

}

void printList(struct node* head) {
	struct node* tmp = head;
	while (tmp != NULL) {
		printf("%d\t", tmp->data);
		tmp = tmp->next;
	}
}


int main() {
	struct node* yeni1 = newNode(5);
	struct node* yeni2 = newNode(10);
	struct node* yeni3 = newNode(20);
	struct node* yeni4 = newNode(20);
	struct node* yeni5 = newNode(30);
	yeni1->next = yeni2; yeni2->next = yeni3; yeni3->next = yeni4; yeni4->next = yeni5;
	yeni2->prev = yeni1; yeni3->prev = yeni2; yeni4->prev = yeni3; yeni5->prev = yeni4;



	//ortancaSil(yeni1);
	//istSil(yeni1,3);
	cSil(yeni1);
	printList(yeni1);


	return 0;
}*/