#include<stdio.h>
#include<stdlib.h>

struct queue {
	int front, rear, size;
	unsigned capacity;
	int* array;
};

struct queue* cQueue(unsigned capacity) {
	struct queue* yeni = (struct queue*)malloc(sizeof(struct queue));
	yeni->capacity = capacity;
	yeni->size = yeni->front = 0;
	yeni->rear = yeni->capacity - 1;
	yeni->array = (int*)malloc(yeni->capacity * sizeof(int));
	return yeni;
}

int isFull(struct queue* x) {
	return (x->size == x->capacity);
}

int isEmpty(struct queue* x) {
	return (x->size == 0);
}

void enqueue(struct queue* x, int item) {
	if (isFull(x))
		return;
	x->rear = (x->rear + 1) % x->capacity;
	x->array[x->rear] = item;
	x->size = x->size + 1;
}

int dequeue(struct queue* x) {
	if (isEmpty(x))
		return -1;
	int item = x->array[x->front];
	x->front = (x->front + 1) % x->capacity;
	x->size = x->size - 1;
	return item;
}

void reverse(struct queue* x) {
	if (isEmpty(x))
		return;
	int data = dequeue(x);
	reverse(x);
	enqueue(x, data);
}
int sizeC(struct queue* x) {
	if(isEmpty(x))
     	return 0;
	int item = dequeue(x);
	int count = 1 + sizeC(x);
	enqueue(x, item);
	return count;
}
int findMax(struct queue* x, int currentMax) {
	if (isEmpty(x))
		return currentMax;
	int item = dequeue(x);
	int newMax = (item > currentMax) ? item : currentMax;
	int result = findMax(x, newMax);
	enqueue(x, item);
	return result;
}
int main() {
	struct queue* yeni = cQueue(10);
	enqueue(yeni, 5); enqueue(yeni, 15); enqueue(yeni, 25);
	enqueue(yeni, 35);
	printf("Kuyruk boyutu=%d\n", sizeC(yeni));
	printf("Max deðerli eleman = %d\n", findMax(yeni,0));
	int i = 0;
	while (i < 4) {
		printf("Alinan = %d\n", yeni->array[i]);
		i++;
	}
	buradan çok fazla soru çýkabilir
	yeni->front = 0;
	reverse(yeni);
	i = 1;
	while (i < 5) {
		printf("Alinan= %d\n", yeni->array[yeni->front]);
		yeni->front = yeni->front + 1;
		i++;
	}
	return 0;
} 
