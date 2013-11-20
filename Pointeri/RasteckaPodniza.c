/*
	Da se napise funkcija koja za niza od N celi broevi ke gi
	pronajde pocetokot i dolzinata na najgolemata rastecka podniza.
*/

#include <stdio.h>
#define MAX 100

void maxRastecka(int x[], int n, int *pos, int *len){
	int i, start, currentLen;
	start = 0;
	currentLen = 1;
	*pos = 0;
	*len = 1;

	for (i = 0; i < n - 1; i++){
		start = i;
		currentLen = 1;
		while ((x[i] < x[i+1])){
			currentLen++;
			i++;
			if (i >= n) break;
		}
		if (currentLen > *len){
			*len = currentLen;
			*pos = start;
		}
	}
}

int main(){

	int a[MAX];
	int i, n, pos, len;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	
	maxRastecka(a, n, &pos, &len);

	printf("Pocetokot: %d, dolzina: %d", pos, len);

	return 0;
}