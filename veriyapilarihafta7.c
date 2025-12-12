/*#include<stdio.h>

void move(int n, char source, char dest, char sparse) {
	if (n == 1)
		printf("\n MOv from %c to %c", source, dest);
	else {
		move(n - 1, source, sparse, dest);
		move(1, source, dest, sparse);
		move(n - 1, sparse, dest, source);
	}
}
int F(int x, int y) {
	if (x < y) {
		return 0;
	}
	else {
		return F(x - y, y) + 1;;
	}

}
int main() {
	int n;
	printf("Please enter the number of discs:");
	scanf_s("%d",&n);
	move(n, 'A', 'C', 'B');
	printf("sonuc = %d\n", F(20, 5));
	return 0;
}
//4-5 kod 1 saat her konudan 1 soru  
*/