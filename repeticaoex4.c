#include<stdio.h>
int main() {
	int n, ultimo_digito, digito;
	int todos_iguais = 1;

	printf("digite um numero inteiro: ");
	scanf("%d", &n);

	ultimo_digito = n %10;
	n/=10;

	for (; n > 0; n/=10) {
		digito = n %10;
		if(digito != ultimo_digito) {
			todos_iguais = 0;
			break;
		}
		n /=10;
	}
	if (todos_iguais) {
		printf("todos os digitos sao iguais.\n");
	} else {
		printf("os digitos nao sao todos iguais.\n");
	}


	return 0;

}

