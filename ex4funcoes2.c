#include <stdio.h>

void removeExtremos(int *n, int *pri, int *ult)
{
	int tn, pot;
	*ult = *n % 10;
	pot = 1;
	tn = *n;
	while(tn >= 10) {
		tn = tn / 10;
		pot *= 10;
	}
	*pri = *n / pot;
	*n = *n % pot;
	*n = *n / 10;
}

int main() {
	int n, pri, ult;
	int original;

	printf("Digite um numero inteiro positivo (sem digito 0): ");
	scanf("%d", &n);

	if (n <= 0) {
		printf("Numero invalido. Deve ser positivo.\n");
		return 1;
	}

	original = n;

	while (n >= 10) {
		removeExtremos(&n, &pri, &ult);
		if (pri != ult) {
			printf("%d Nao eh palindromo.\n" , original);
			return 0;
		}
	}

	printf("%d eh palindromo.\n", original);
	return 0;
}
