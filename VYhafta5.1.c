/*#include <stdio.h>   // Standart giriþ/çýkýþ fonksiyonlarýný kullanabilmek için eklenen bir kütüphane (printf gibi).
#include <stdlib.h>  // Dinamik bellek yönetimi fonksiyonlarýný kullanabilmek için eklenen bir kütüphane (malloc gibi).
#include <limits.h>  // Tam sayý limitlerini içeren kütüphane (bu kodda doðrudan kullanýlmýyor ama genellikle yýðýn implementasyonlarýnda INT_MIN gibi deðerler için eklenir).

// Yýðýn (stack) veri yapýsýný temsil eden bir struct (yapý) tanýmý.
struct stack {
	int* array;      // Yýðýnýn elemanlarýný tutacak olan dinamik bir dizi (pointer).
	int top;         // Yýðýnýn en üstündeki elemanýn indeksini tutan deðiþken.
	unsigned capacity; // Yýðýnýn alabileceði maksimum eleman sayýsýný (kapasitesini) tutan deðiþken.
};

// Belirtilen kapasitede yeni bir yýðýn oluþturan ve bu yýðýnýn adresini döndüren fonksiyon.
struct stack* createStack(unsigned capacity) {
	// Yýðýn yapýsý için bellekte yer ayýrýyor.
	struct stack* yeni = (struct stack*)malloc(sizeof(struct stack));
	// Baþlangýçta yýðýn boþ olduðu için 'top' (en üst) indeksi -1 olarak ayarlanýyor.
	yeni->top = -1;
	// Fonksiyona parametre olarak gelen kapasite deðeri, yýðýnýn kapasitesine atanýyor.
	yeni->capacity = capacity;
	// Yýðýnýn elemanlarýný tutacak olan dizi için bellekte (kapasite * bir tam sayýnýn boyutu) kadar yer ayýrýlýyor.
	yeni->array = (int*)malloc(sizeof(int) * capacity);
	// Oluþturulan yeni yýðýnýn adresi geri döndürülüyor.
	return yeni;
}

// Yýðýnýn dolu olup olmadýðýný kontrol eden fonksiyon.
int isFull(struct stack* yeni) {
	// Eðer 'top' indeksi, kapasitenin bir eksiðine eþitse (yani son indekse ulaþýlmýþsa), yýðýn doludur.
	// Bu durumda 1 (doðru) döndürür, aksi halde 0 (yanlýþ) döndürür.
	return yeni->top == yeni->capacity - 1;
}

// Yýðýnýn boþ olup olmadýðýný kontrol eden fonksiyon.
int isEmpty(struct stack* yeni) {
	// Eðer 'top' indeksi -1 ise, bu yýðýnýn boþ olduðu anlamýna gelir.
	// Bu durumda 1 (doðru) döndürür, aksi halde 0 (yanlýþ) döndürür.
	return yeni->top == -1;
}

// Yýðýna yeni bir eleman ekleyen (push) fonksiyon.
void push(struct stack* yeni, int x) {
	// Yýðýnýn dolu olup olmadýðýný kontrol eder. Eðer doluysa, hiçbir þey yapmadan fonksiyondan çýkar.
	if (isFull(yeni))
		return;
	// 'top' indeksini bir artýrýr, böylece yeni eleman için yer açýlýr.
	yeni->top++;  // Bu satýr `yeni->top = yeni->top + 1;` ile ayný anlama gelir.
	// Gelen 'x' deðerini, artýrýlmýþ olan 'top' indeksindeki dizi konumuna atar.
	yeni->array[yeni->top] = x;
}

// Yýðýnýn en üstündeki elemaný çýkaran (pop) ve o elemanýn deðerini döndüren fonksiyon.
int pop(struct stack* yeni) {
	// Yýðýnýn boþ olup olmadýðýný kontrol eder. Eðer boþsa, 0 deðerini döndürür.
	if (isEmpty(yeni))
		return 0;
	// Yýðýnýn en üstündeki elemanýn deðerini 'alinan' adýnda bir deðiþkene atar.
	int alinan = yeni->array[yeni->top];
	// 'top' indeksini bir azaltýr, böylece en üstteki eleman artýk yýðýnýn bir parçasý olarak kabul edilmez.
	yeni->top--;
	// Yýðýndan alýnan elemanýn deðerini geri döndürür.
	return alinan;
}

// Programýn çalýþmaya baþladýðý ana fonksiyon.
int main() {
	// Kapasitesi 5 olan yeni bir yýðýn oluþturuluyor ve 'yeni' pointer'ýna atanýyor.
	struct stack* yeni = createStack(5);
	// push fonksiyonu ile yýðýna sýrasýyla 5, 6 ve 7 deðerleri ekleniyor.
	// Son durum: Yýðýn -> [5, 6, 7] (En üstte 7 var)
	push(yeni, 5); push(yeni, 6); push(yeni, 7);
	// pop fonksiyonu çaðrýlýyor. Yýðýnýn en üstündeki eleman (7) alýnýr ve ekrana yazdýrýlýr.
	// Yýðýn -> [5, 6]
	printf("En üst = %d\n", pop(yeni));
	// Tekrar pop fonksiyonu çaðrýlýyor. Yýðýnýn yeni en üstündeki eleman (6) alýnýr.
	// %d formatlayýcýsý ile pop(yeni)'den dönen 6 deðeri yazdýrýlýr.
	// Yýðýn -> [5]
	printf("En üst = %d\n, adresi = %d\n", pop(yeni), *yeni);
}*/