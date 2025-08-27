#include <stdio.h>
int main() {
	float A, G, Ra, Rg;
	printf("digite o preC'o do litro do alcool e da gasolina respectivamente: ");
	scanf("%f %f", &A, &G );

	printf("digite o valor do rendimento de km/l do alcool e da gasolina respectivamente: ");
	scanf("%f %f", &Ra, &Rg);

	float custoA = A / Ra;
	float custoG = G / Rg;

	if(custoA < custoG) {
		printf ("A\n");
	} else {
		printf("G\n");

	}

	return 0;
}