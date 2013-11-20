/*
Да се направи функција која има два аргументи: низа од N цели броеви 
и бројот на елементи N. Од низата да се отстранат сите елементи кои се 
појавуваат повеќе од еднаш. Низата и нејзината должина се вчитува од СВ. 
На СИ испечатете ги елементите на новодобиената низа оделени со една белина.
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int otstranuvanje(int *a, int n){
	int i, j, jj, br = 0;

	for (i = 0; i < (n - br); i++){
		for (j = i + 1; j < (n - br); j++){
			if (a[i] == a[j]){
				jj = j;
				for (j = j; j < (n - br); j++){
					a[j] = a[j + 1];
				}
				br++;
				j = jj;
			}
		}
	}

	for (i = 0; i < (n - br); i++)
		printf("%d ", a[i]);
	
	return 0;
}

int main(){
	int a[MAX], n, i;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);

	otstranuvanje(a, n);

	system("pause");
	return 0;
}