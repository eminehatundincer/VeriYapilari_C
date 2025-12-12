#include<stdio.h>
#include<stdlib.h>,

//Stack
struct node {
	int data;
	struct node* next;
};

//Top : yeni giren elemanı gösterme
struct node* top = NULL;

//Push: eleman ekleme
int push(int data) {


	//stack is Empty
	if (top == NULL) {
		struct node *new = (struct node*)malloc(sizeof(struct node));
		new->data = data;
		new->next = NULL;

		top = new;
	}
	else {
		struct node *new = (struct node*)malloc(sizeof(struct node));
		new->data = data;
		new->next = top;
		top = new;
	}
	return 1;
}
int display() {
	if (top == NULL) {
		printf("Stack is empty! \n");
		return 1;
	}
	struct node* index = top;
	while (index != NULL) {
		printf("%d->", index->data);
		index = index->next;
	}
	printf("\n");
	return 1;
}

int pop() {
	//Stack empty
	if (top == NULL) {
		printf("Stack is empty: \n");
		return 1;
	}
	struct node* temp = top;
	top = top->next;
	free(temp);
	
	return 1;
}

int main() {

	push(1);
	push(2);
	push(4);

	pop(); //son giren ilk çıkar 
	display();
	  //ekleme işlemi son eklenen başa şekilde düşün 

	return 1;
}
