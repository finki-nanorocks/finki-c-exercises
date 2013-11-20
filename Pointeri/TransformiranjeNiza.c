/*
	Da se napise funkcija koja vleznata niza a0, a1, a2, ..., an-1 ke ja transformira
	vo izlezna niza b0, b1, b2, ..., bn-1 na sledniot nacin:
		b0 = a0 + an-1
		b1 = a1 + an-2
		b3 = a2 + an-3
		.
		.
		.
		bn = an-1 + a0
	Vlez:
		1 2 3 5 7
	Izlez:
		8 7 6 7 8
*/

#include <stdio.h>
#define MAX 100

void promena(int *x, int n){
	int i, j;
	
	for (i = 0, j = n - 1; i < j; i++, j--){
		*(x + i) += *(x + j);
		*(x + j) = *(x + i);
	}
	if (n % 2){
		*(x + n / 2) *= 2;
	}
}

int main(){
	int i, n;
	int a[MAX];

	printf("Kolku elementi ke ima nizata: ");
	scanf("%d", &n);
	printf("Vnesi gi elementite:\n");

	for (i = 0; i < n; i++)  //Scan
		scanf("%d", &a[i]);

	promena(a, n);

	printf("\nNovata niza e:\n");
	for (i = 0; i < n; i++)  //Print New
		printf("%d ", a[i]);
	printf("\n");
	
	return 0;
}