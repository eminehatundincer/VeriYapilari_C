#include<stdio.h>
#include<stdlib.h>

//Queue Node
struct node {
	int data;
	struct node* next; //linkedlistte yaptığımız için sonraki elemanı tutacak bir next tanımlamamız gerekiyor.
};

//Front & Rear
struct node* Front = NULL;
struct node* rear = NULL;

//Enqueue: Kuyruğa eleman ekleme

int enqueue(int data) {
	//queue is empty
	if (Front == NULL) {
		struct node* new = (struct node*)malloc(sizeof(struct node));
		new->data = data;
		new->next = NULL;

		Front = rear = new;
	}
	//Queue is full
	else {
		struct node* new = (struct node* )malloc(sizeof(struct node));
		new->data = data;
		new->next = NULL;

		rear->next = new;
		rear = new;
	}
	return 1;
}

//Ekranda kuyruğu göster 
//queue display
int display() {
	//Queue is empt
	if (Front == NULL) {
		printf("Queue is empty\n");
		return 1;
	}
	printf("Queue:");
	struct node* index = Front; //ilk frontu gösterecek
	while (index != NULL) {
		printf("%d -> ", index->data);
		index = index->next;
	}

	printf("\n");
	return 1;
}
int dequeue() {
	//Queue is empty
	if (Front == NULL) {
		printf("Queue is empty \n");
		return 1;
	}
	struct node *temp = Front;  //ilk frontu tutacak
	Front = Front->next;
	free(temp); //frontu sildik
	return 1;
}

int main() {

	enqueue(5);
	enqueue(6);
	enqueue(7);
	enqueue(8);
	enqueue(10);

	display();

	dequeue();// ilk giren ilk çıkar 5
	dequeue();
	dequeue();
	dequeue();
	dequeue();
	display(); //son elemanı çıkarıp ekranda göster dedik

	return 1;
}


