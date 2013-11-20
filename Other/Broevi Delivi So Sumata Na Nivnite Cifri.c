/*
Da se napise programa koja ke gi otpecati site broevi od daden opseg (pocetokot i krajot na
opsegot se vnesuvaat od tastatura) koi se delivi so sumata na svoite cifri.
Na kraj da se ispecati kolku takvi broevi imalo vo opsegot.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

	int n, m, i, zbir=0, pom, cifra, brojac=0;

	scanf("%d %d", &n, &m);

	for (i = n; i <= m; i++){
		pom = i;
		zbir = 0;
		while (pom > 0){
			cifra = pom % 10;
			pom /= 10;
			zbir = zbir + cifra;
		}
		if (i % zbir == 0){
			printf("%d\n", i);
			brojac++;
		}
	}

	printf("Vo dadeniot opseg ima %d broevi sto go ispolnuvaat uslovot.\n", brojac);

	system("pause");
	return 0;
}