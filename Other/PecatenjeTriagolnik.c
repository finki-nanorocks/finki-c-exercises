/*
Da se napise programa koja na ekran ce pecate broevi vo vid na pravoagolen triagolnik
pocnuvajki od 1. Visinata na triagolnikot (brojot na redovi) se zadava od tastatura.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

	int n, i, j=1, pom;

	scanf("%d", &n);

	if (n == 1){
		printf("%d\n", n);
	}
	else {
		for (i = 1; i <= n; i++){
			pom = i;
			while (pom > 0){
				printf("%d ", j);
				j++;
				pom--;
			}
			printf("\n");
		}
	}

	system("pause");
	return 0;
}