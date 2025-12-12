#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_SIZE 100
 //REVERSE FONKSİYONU
void reverse_string(char* str) {
	int len = strlen(str);
	for (int i = 0; i < len;i++) {
		push(str[i]);
	}
	for (int i = 0; i < len; i++) {
		str[i] = pop();
	}
}
int main() {
	char text[MAX SIZE];
	printf("Bir metin girin: ");
	fgets(text, MAX_SIZE, stdin);
	text[strcspn(text, "\n")] = 0; // Yeni satýr karakterini kaldýr
	reverse_string(text);
		
	printf("Ters çevrilmiþ metin: %s\n", text);
	free_stack();
	printf("Bellek serbest býrakýldý.\n");
	return 0;
}*/ /*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 100

// --- Stack Yapýsý ---
struct Stack {
    char data[MAX_SIZE];
    int top;
};

// Stack deðiþkeni global tanýmlandý
struct Stack stack = { .top = -1 };

// Stack iþlemleri
void push(char c) {
    if (stack.top == MAX_SIZE - 1) {
        printf("Stack dolu!\n");
        return;
    }
    stack.data[++stack.top] = c;
}

char pop() {
    if (stack.top == -1) {
        printf("Stack bos!\n");
        return '\0';
    }
    return stack.data[stack.top--];
}

void free_stack() {
    stack.top = -1; // Belleði sýfýrlamaya gerek yok, sadece boþaltmak yeterli
}

// --- Stringi Ters Çeviren Fonksiyon ---
void reverse_string(char* str) {
    int len = strlen(str);

    // Tüm karakterleri stack'e at
    for (int i = 0; i < len; i++) {
        push(str[i]);
    }

    // Stack'ten çýkararak ters sýrayla geri yaz
    for (int i = 0; i < len; i++) {
        str[i] = pop();
    }
}

// --- main() ---
int main() {
    char text[MAX_SIZE];

    printf("Bir metin girin: ");
    fgets(text, MAX_SIZE, stdin);

    // Yeni satýr karakterini kaldýr
    text[strcspn(text, "\n")] = '\0';

    // Ters çevir
    reverse_string(text);

    printf("Ters çevrilmiþ metin: %s\n", text);

    // Stack'i sýfýrla
    free_stack();
    printf("Bellek serbest býrakýldý.\n");

    return 0;
}

