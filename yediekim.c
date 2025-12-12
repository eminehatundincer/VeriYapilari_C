/* #include <stdio.h>
#include <stdlib.h>


struct node {
    int data;
    struct node* next;
    struct node* prev;
};

//yeni düðüm oluþturma fonskiyonu
struct node* newNode(int x) {
    struct node* yeni = (struct node*)malloc(sizeof(struct node));
    yeni->data = x;
    yeni->next = yeni->prev = NULL;
    return yeni;
}

//listeyi yazdýrma fonksiyonu
void printList(struct node* head) {
    struct node* tmp = head;
    while (tmp != NULL)
    {
        printf("%d\t", tmp->data);
        tmp = tmp->next;
    }
    printf("\n");
}

//ARAYA EKLEME FONKSÝYONU
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

//BAÞA EKLEME FONKSÝYONU
void basaEkle(struct node** head, int x) {
    struct node* yeni = newNode(x);
    yeni->next = *head;
    *head->prev = yeni;
    *head = yeni;
}

//SONA EKLEME FONSKÝYONU
void sonaEKle(struct node* head, int x) {
    struct node* yeni = newNode(x);
    struct node* tmp = head;
    while (tmp->next != NULL)
        tmp = tmp->next;
    yeni->prev = tmp;
    tmp->next = yeni;
}

//ARADAN SÝL FONKSÝYONU
void aradanSil(struct node* head, int x) {
    struct node* tmp = head;
    while (tmp->data != x)
        tmp = tmp->next;
    tmp->prev->next = tmp->next;
    tmp->next->prev = tmp->prev;
    free(tmp);
}

//BAÞA EKLE FONKSÝYONU
void bastanSil(struct node** head) {
    struct node* tmp = *head;
    *head = tmp->next;
    free(tmp);
    *head->prev = NULL;
}

int main() {
    struct node* yeni1 = newNode(5);
    struct node* yeni2 = newNode(15);
    struct node* yeni3 = newNode(25);
    struct node* yeni4 = newNode(35);
    yeni1->next = yeni2; yeni2->next = yeni3; yeni3->next = yeni4;
    yeni2->prev = yeni1; yeni3->prev = yeni2; yeni4->prev = yeni3;
    arayaEkle(yeni1, 33, 25);
    basaEKle(&yeni1);
    bastanSil(&yeni1);
    sonaEKle(yeni1, 45);
    aradanSil(yeni1, 33);
    printList(yeni1);
    return 0;
}*/