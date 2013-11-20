/*
Да се напише функција која за дадена низа А од N (N < 100) природни броеви
(низата и бројот N се вчитуваат од СВ) ќе ги сортира нејзините елементи во
растечки редослед и ќе го врати како резултат најмалиот елемент во низата.
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int sortMin(int *a, int n) {
	// vasiot kod ovde
	int pom, i, j;

	for (i = 0; i < n; i++){
		for (j = i + 1; j < n; j++){
			if (a[i] > a[j]){
				pom = a[i];
				a[i] = a[j];
				a[j] = pom;
			}
		}
	}
	return a[0];
}
int main() {
	int a[MAX], n, i, min;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	min = sortMin(a, n);
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n%d", min);

	system("pause");
	return 0;
}