#include<stdlib.h>
#include<stdio.h>

//bubbleSort ile verilen diziyi büyükten küçüğe yazdır.
void bubbleSort(int* arr, int n) {
	int i, j, tmp;
	for (i = 0; i < n - 1; i++) {
		for (j = i + 1;j < n;j++) {
			if (arr[i] < arr[j]) {
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}
int main() {
	int dizi[5] = { 1,10,3,4,8 };
	int i;

	bubbleSort(dizi, 5);

	// Tüm diziyi yazdır
	for (i = 0; i < 5; i++) {
		printf("%d ", dizi[i]);
	}
	return 0;
}

🟢 
