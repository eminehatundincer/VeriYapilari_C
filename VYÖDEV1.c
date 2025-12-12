/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//ÖDEV

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

void basEkle(struct node** head, int item) 
{
    struct node* yeni = newNode(item);
    yeni->next = (*head);
    (*head) = yeni;
}

void sonEkle(struct node* head, int item) 
{
    struct node* yeni = newNode(item);
    struct node* tmp = head;
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
    tmp->next = yeni;
}

void ortEkle(struct node* head, int item) 
{
    struct node* yeni = newNode(item);
    struct node* tmp = head;

    int elemanSayisi = 0;
    while (tmp != NULL) {
        elemanSayisi++;
        tmp = tmp->next;
    }

    if (elemanSayisi <= 2) {
        sonEkle(head, item);
        return;
    }

    int pozisyon = (rand() % (elemanSayisi - 2)) + 1;

    tmp = head;
    for (int i = 0; i < pozisyon; i++) {
        tmp = tmp->next;
    }

    yeni->next = tmp->next;
    tmp->next = yeni;
}

    int printlist(struct node* head) 
    {
    struct node* tmp = head;
    int sayac = 0;
    printf("Liste: ");
    while (tmp != NULL) {
        printf("%d ", tmp->data);
        tmp = tmp->next;
        sayac++;
    }
    printf("\n");
    if (sayac % 5 == 0 && sayac != 0) {
        printf("5'in katı kadar eleman mevcuttur.\n");
    }
    return sayac;
}

int main() 
{
    srand(time(NULL));
    struct node* head = newNode(10);
    head->next = newNode(15);
    head->next->next = newNode(20);

    char secim;
    do {
        int rnd1 = (rand() % 3) + 1;
        int rnd2 = (rand() % 100) + 1;

        printf("\nEklenecek sayı = %d\n", rnd2);
        printf("İşlem (1=Başa, 2=Ortaya, 3=Sona) = %d \t\n", rnd1);

        if (rnd1 == 1) {
            basEkle(&head, rnd2);
        }
        else if (rnd1 == 2) {
            ortEkle(head, rnd2);
        }
        else {
            sonEkle(head, rnd2);
        }
        printlist(head);

        printf("Devam etmek için ENTER, çıkmak için q girin: ");
        secim = getchar();
    } while (secim != 'q' && secim != 'Q');

    printf("Programdan çıkılıyor...\n");
    return 0;
}*/
 