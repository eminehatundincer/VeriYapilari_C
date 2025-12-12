#include<stdio.h>
#include<stdlib.h>


//****STACK İÇİN YAPI OLUŞTURUYORUZ.*****
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
	while (tmp != NULL && tmp->data != y) {
		tmp = tmp->next;
	}

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

	if (head == NULL) {
		printf("Hata: Liste bos. Sona ekleme yapilamaz.\n");
		// (Bu fonksiyonun düzgün çalışması için 'head' adresini alması gerekirdi,
		// ama mevcut yapıya göre sadece çökmesini engelliyoruz.)
		return;
	}

	struct node* yeni = newNode(item);
	struct node* tmp = head;
	while (tmp->next != NULL) {
		tmp = tmp->next;
	}
	// Son düğümün 'next'ine yeni düğümü bağla
	tmp->next = yeni;
}

// Listeyi bellekte serbest bırakan yardımcı fonksiyon (EKLENDİ)
void freeList(struct node* head) {
	struct node* tmp;
	while (head != NULL) {
		tmp = head;
		head = head->next;
		free(tmp);
	}
}

// Listeyi yazdıran yardımcı fonksiyon (EKLENDİ)
void printList(struct node* head) {
	struct node* tmp = head;
	while (tmp != NULL) {
		printf("%d -> ", tmp->data);
		tmp = tmp->next;
	}
	printf("NULL\n");
}

int main() {
	struct node* yeni1 = (struct node*)malloc(sizeof(struct node)); //FONKSİYON YARDIMI İLE DÜĞÜM OLUŞTURDUK
	yeni1->data = 10;
	struct node* yeni2 = (struct node*)malloc(sizeof(struct node));
	yeni2->data = 15;
	struct node* yeni3 = (struct node*)malloc(sizeof(struct node));
	yeni3->data = 20;
	yeni1->next = yeni2; yeni2->next = yeni3; yeni3->next = NULL; //LİSTELERİ BİRBİRİNE BAĞLADIK
	

	struct node* tmp = yeni1; //LİSTEYİ YAZDIRMAK İÇİN GEZİCİ DÜĞÜM OLUŞTURDUK
	while (tmp != NULL) {
		printf("%d\t", tmp->data);
		tmp = tmp->next;
	}
	printf("\n------------------\n");

	
	struct node* yeni1 = newNode(10);
	struct node* yeni2 = newNode(15);
	struct node* yeni3 = newNode(20);
	yeni1->next = yeni2; yeni2->next = yeni3; yeni3->next = NULL;
	printf("Orijinal Liste: \n");
	printList(yeni1);

	//Başa ortaya veya sına ekleme örnekleri:
	basEkle(&yeni1 , 5); //***LİSTE BAŞINA SAYI EKLEME***
    ortEkle(yeni1, 10 ,20);//***ORTAYA EKLEME*** 
	//10-20 SAYILARI ARASINA yeni1 SAYISINI EKLİYORUZ
    sonEkleme(yeni1,30);//***LİSTE SONU SAYI EKLEME***
	
	//Listeyi Yazdır:
	struct node* tmp = yeni1;
	while (tmp != NULL) {
		printf("%d \t", tmp->data);
		tmp = tmp->next;
	}

	freeList(yeni1);

	return 0;
}


