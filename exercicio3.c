#include<stdio.h>

int main() {
	float A, B, C;

	printf("digite 3 valores: ");
	scanf("%f %f %f", &A, &B, &C);

	if (A < B + C && B < A + B && C < A + B)
		if (A == B && B == C) {
			printf ("triangulo equilatero\n");
		}
		else if (A == B || B == C || A == C) {
			printf ("triangulo isosceles\n");
		}
		else {
			printf("triangulo escaleno");

		} else {
		printf ("os valores fornecidos nao formam um trianguo\n");
	}

	return 0;
}