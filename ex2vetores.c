#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
int main() {
	int vetor[N];
	int i, posicao, tamanho = N;

	srand(time(NULL));

	printf("Vetor original: \n");
	for (i = 0; i < N; i++) {
		vetor[i] = rand() % 99 + 1;
		printf("%d ", vetor[i]);
	}
	printf("\n");


	printf("Digite a posicao do elemento a remover (0 a %d): ", N - 1);
	scanf("%d", &posicao);

	if (posicao < 0 || posicao >= N) {
		printf("Posicao invalida!\n");
		return 1;
	}

	for (i = posicao; i < tamanho - 1; i++) {
		vetor[i] = vetor[i + 1];
	}
	tamanho--;

	printf("Vetor apos remocao:\n");
	for (i = 0; i < tamanho; i++) {
		printf("%d ", vetor[i]);
	}
	printf("\n");

	return 0;
}

