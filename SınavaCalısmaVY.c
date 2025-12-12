/*

// Visual Studio'da 'scanf' hatası almamak için
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>


//****BAĞLI LİSTE İÇİN YAPI OLUŞTURUYORUZ.*****
struct node
{
	int data;
	struct node* next;
};

//DÜĞÜM OLUŞTURAN FONKSİYON:
struct node* newNode(int x) {
	struct node* yeni = (struct node*)malloc(sizeof(struct node));
	yeni->data = x;
	yeni->next = NULL;
	return yeni;
};

//BAĞLI LİSTEDE BAŞA ELEMAN EKLEYEN FONKSİYON
void basEkle(struct node** head, int item) {
	struct node* yeni = newNode(item);
	yeni->next = (*head);
	(*head) = yeni;
}

// BAĞLI LİSTEDE ORTAYA ELEMAN EKLEYEN FONKSİYON
void ortEkle(struct node* head, int item, int y) {
	struct node* yeni = newNode(item);
	struct node* tmp = head;

	// HATA 1 (KRİTİK ÇÖKME HATASI) DÜZELTMESİ:
	// 'y' değeri listede bulunamazsa 'tmp' NULL olur ve döngüden sonra
	// 'tmp->next' e erişim programı çökertir.
	// Döngüye 'tmp != NULL' kontrolü eklenmeli.
	while (tmp != NULL && tmp->data != y) {
		tmp = tmp->next;
	}

	// 'tmp' NULL ise eleman bulunamamış demektir.
	if (tmp == NULL) {
		printf("Hata: Araya eklemek icin '%d' degeri listede bulunamadi!\n", y);
		free(yeni); // Oluşturulan ama kullanılmayan düğümü serbest bırak
		return;
	}

	// Düğüm bulundu, araya ekle
	yeni->next = tmp->next;
	tmp->next = yeni;
}

//BAĞLI LİSTEDE SONA ELEMAN EKLEYEN FONKSİYON
void sonEkleme(struct node* head, int item) {

	// HATA 2 (KRİTİK ÇÖKME HATASI) DÜZELTMESİ:
	// Liste boşsa ('head' NULL ise), 'tmp->next' programı çökertir.
	if (head == NULL) {
		printf("Hata: Liste bos. Sona ekleme yapilamaz.\n");
		return;
	}

	struct node* yeni = newNode(item);
	struct node* tmp = head;

	// Listenin son düğümünü bul
	while (tmp->next != NULL) {
		tmp = tmp->next;
	}
	// Son düğümün 'next'ine yeni düğümü bağla
	tmp->next = yeni;
}

// Listeyi bellekte serbest bırakan yardımcı fonksiyon
void freeList(struct node* head) {
	struct node* tmp;
	while (head != NULL) {
		tmp = head;
		head = head->next;
		free(tmp);
	}
}

// Listeyi yazdıran yardımcı fonksiyon
void printList(struct node* head) {
	struct node* tmp = head;
	while (tmp != NULL) {
		printf("%d -> ", tmp->data);
		tmp = tmp->next;
	}
	printf("NULL\n");
}

int main() {

	// HATA 3 (DERLEME HATASI) DÜZELTMESİ:
	// 'yeni1', 'yeni2', 'yeni3' değişkenlerini iki kez
	// tanımlamaya çalışıyordunuz. 'newNode' kullanmayan
	// eski 'malloc' bloğu tamamen kaldırıldı.

	struct node* yeni1 = newNode(10);
	struct node* yeni2 = newNode(15);
	struct node* yeni3 = newNode(20);
	yeni1->next = yeni2; yeni2->next = yeni3; yeni3->next = NULL;

	printf("Orijinal Liste: \n");
	printList(yeni1);

	// Fonksiyon çağrıları yorumdan çıkarıldı ve düzeltildi

	printf("\nBasa '5' ekleniyor...\n");
	basEkle(&yeni1, 5);
	printList(yeni1); // Liste: 5 -> 10 -> 15 -> 20 -> NULL

	printf("\n'15' den sonra '18' ekleniyor...\n");
	ortEkle(yeni1, 18, 15);
	printList(yeni1); // Liste: 5 -> 10 -> 15 -> 18 -> 20 -> NULL

	printf("\nSona '30' ekleniyor...\n");
	sonEkleme(yeni1, 30);
	printList(yeni1); // Liste: 5 -> 10 -> 15 -> 18 -> 20 -> 30 -> NULL

	// Oluşturulan tüm liste belleğini serbest bırak
	freeList(yeni1);

	return 0;
}

*/











