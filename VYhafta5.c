/*#include <stdio.h>
#include <stdlib.h>
#include<limits.h>

// YIÐIN(STACK) VERÝ YAPISINI TEMSÝL EDEN STRUCT(YAPI) TANIMI
struct stack {
	int* array;
	int top;
	unsigned capacity;
};
// Belirtilen kapasitede yeni bir yýðýn oluþturan ve bu yýðýnýn adresini döndüren fonksiyon.
struct stack* createStack(unsigned capacity) {
	struct stack* yeni = (struct stack*)malloc(sizeof(struct stack));
	yeni->top = -1; // Baþlangýçta yýðýn boþ olduðu için 'top' (en üst) indeksi -1 olarak ayarlanýyor.
	yeni->capacity = capacity; //yýðýn oluþturma
	yeni->array = (int*)malloc(sizeof(int) * capacity);
	return yeni;
}
//Boþ mu Dolu mu kontrolü
int isFull(struct stack* yeni) {
	return yeni->top == yeni->capacity - 1;
}
int isEmpty(struct stack* yeni) {
	return yeni->top == -1;
}
void push(struct stack* yeni, int x) {
	if (isFull(yeni))
		return;
	yeni->top++;  //yeni -> top = yeni -> top +1;
	yeni->array[yeni->top] = x;
}
int pop(struct stack* yeni) {
	if (isEmpty(yeni))
		return 0;
	int alinan = yeni->array[yeni->top];
	yeni->top--;
	return alinan;
}
int main() {
	struct stack* yeni = createStack(5);
	push(yeni, 5); push(yeni, 6); push(yeni, 7);
	printf("En üst = %d\n", pop(yeni));
	printf("En üst = %p\n, adresi = %d\n", pop(yeni), yeni->array);
	return 0;
}*/