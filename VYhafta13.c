#include<stdio.h>
#define V 4;


void addEdge(int mat[4][4], int i, int j) {
	if (i > 4 || j > 4) {
		printf("Sınırlar asıldı!");
		printf("%d  %d indisleri uygun degil", i, j);
	}
	else {
		mat[i][j] = 1;
		mat[j][i] = 1;
	}
}

void displayMatrix(int mat[4][4]) {
	for (int i = 0; i < 4;i++) {
		for (int j = 0; j < 4;j++) {
			printf("%d", mat[i][j]);
		}
		printf("\n");
	}
}

int main() {
	int matris[4][4] = { 0 };
	addEdge(matris, 0, 2);
	addEdge(matris, 1, 3);
	addEdge(matris, 2, 4);
	displayMatrix(matris);

	return 0;
}

//return recursive break loop eğer ifli ifade kullanıyorsak döngü yoksa if else kullanırız sadece
