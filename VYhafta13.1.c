#include<stdlib.h> 
#include<stdio.h> 
void bubbleSort(int* arr, int n) { 
  int i, j, tmp; 
  for (i = 0; i < n - 1; i++) {
    for (j = i + 1;j < n;j++) { 
  if (arr[i] < arr[j]) { tmp = arr[i]; arr[i] = arr[j]; arr[j] = tmp; 
  } 
  } 
  } 
} 
int main() { 
  int dizi[5] = { 1,10,3,4,8 }; 
  bubbleSort(dizi, 5);
  printf("%d\n", dizi[1]);
  return 0; 
}
