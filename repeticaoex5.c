#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	int numero_secreto, chute, tentativas = 0;

	srand(time(0));
	numero_secreto = rand() %500 + 1;

	printf("tente adivinhar o numero: ");

	for(;;) {
		printf("\ndigite o seu chute: ");
		scanf("%d", &chute);
		tentativas++;

		if (chute > numero_secreto) {
			printf("o numero_secreto eh menor\n");
		}
		else if (chute < numero_secreto) {
			printf("o numero_secreto eh maior\n");

		} else {
			printf("voce acertou o numero %d em %d tentativas\n", numero_secreto, tentativas);
			break;
		}
	}
	printf("classificacao: ");
	if(tentativas >=1 && tentativas <= 3) {
		printf("nota a\n");
	} else if(tentativas >= 4 && tentativas <= 6) {
		printf("nota b\n");
	} else if(tentativas>=7 && tentativas <=10) {
		printf("nota c\n");
	} else {
		printf("nota d\n");
	}

	return 0;

}

