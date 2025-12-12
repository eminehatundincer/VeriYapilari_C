/*
#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include <string.h>

struct stack2 {
	char* array;
	int top;
	unsigned capacity;
};
struct stack2* createStack2(unsigned capacity) {
	struct stack2* yeni = (struct stack2*)malloc(sizeof(struct stack2));
	yeni->top = -1;
	yeni->capacity = capacity;
	yeni->array = (char*)malloc(sizeof(char) * capacity);
	return yeni;
}
int isFull(struct stack2* yeni) {
	return yeni->top == yeni->capacity - 1;
}
int isEmpty(struct stack2* yeni) {
	return yeni->top == -1;
}
void push2(struct stack2* yeni, char x) {
	yeni->top++;
	yeni->array[yeni->top] = x;
}
char pop2(struct stack2* yeni) {
	if (isEmpty(yeni))
		return 0;
	int alinan = yeni->array[yeni->top];
	yeni->top--;
	return alinan;
}

struct stack {
	int* array;
	int top;
	unsigned capacity;
};
struct stack* createStack(unsigned capacity) {
	struct stack* yeni = (struct stack*)malloc(sizeof(struct stack));
	yeni->top = -1;
	yeni->capacity = capacity;
	yeni->array = (int*)malloc(sizeof(int) * capacity);
	return yeni;
}
int isFull(struct stack* yeni) {
	return yeni->top == yeni->capacity - 1;
}
int isEmpty(struct stack* yeni) {
	return yeni->top == -1;
}
void push(struct stack* yeni, int x) {
	yeni->top++;
	yeni->array[yeni->top] = x;
}
int pop(struct stack* yeni) {
	if (isEmpty(yeni))
		return 0;
	int alinan = yeni->array[yeni->top];
	yeni->top--;
	return alinan;
}

void ikiliDonustur(int n) {
	struct stack* yeni = createStack(20);
	while (n > 0) {
		push(yeni, n % 2);
		n = n/2;
	}
	while (!isEmpty(yeni))
		printf("%d\t", pop(yeni));
}
int hesapla(int* dizi, int boyut) {
	int length = boyut;
	struct stack* yeni = creatStack(length);
	for (int i = 0;i < length; i++)
		push(yeni, dizi[i]);
	int n = 25;
	for (int i = 0; i < 4; i++)
		n += pop(yeni);
	for (int i = 0; i < 2;i++)
		n -= pop(yeni);
	return n;
}
void reverse_string(char* str) {
	int len = strlen(str);
	struct stack* yeni = createStack2(len);
	for (int i = 0;i < len; i++)
		push2(yeni ,str[i]);
	for (int i = 0; i < len;i++)
		str[i] = pop2(yeni);
}

int main() {
	struct stack* yeni = createStack(5);
	push(yeni, 5);push(yeni, 6);push(yeni, 7);
	int dizi[] = { 1,2,3,4,6};
	int boyut = sizeof(dizi) / sizeof(dizi[0]);
	printf("boyut = %d\n", boyut);
	printf("Hesapla sonuç= %d\n", hesapla(dizi,boyut));
	char dizi[] = {"kelime"};
	reverse_string(dizi2);
	printf("kelime= %s", dizi2);
	return 0;
}
*/




