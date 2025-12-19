#include<stdio.h>
void move(int n, char source, char dest, char sparse) {
	if (n == 1) {
		printf("\n MOve from %c to %c", source, dest);
	}
	else {
		move(n - 1, source, sparse, dest);
		move(1, source, dest, sparse);
		move(n - 1, sparse, dest, source);
	}
}
int main() {
	int n;
	printf("Please enter the number of discs:");
	scanf("%d", &n);
	move(n, 'A', 'C', 'B');
	return 0;
}

//123 lü örneði bu formatta dene */
