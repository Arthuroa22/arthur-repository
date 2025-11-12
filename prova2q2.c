#include <stdio.h>

float calculaMedia(int v[], int n) {
	float soma = 0;

	for (int i = 0; i < n; i++)
		soma += v[i];

	return soma / n;
}

int main() {
	FILE *arq = fopen("numeros.txt", "w");
	if (!arq) {
		printf("Erro ao abrir o arquivo para escrita.\n");
		return 1;
	}

	int v[10];

	for (int i = 0; i < 10; i++) {
		printf("numeros %d: ", i + 1 );
		scanf("%d", &v[i]);
		fprintf(arq, "%d\n", v[i]);
	}

	fclose(arq);

	arq = fopen("numeros.txt", "r");
	if (!arq) {
		printf("Erro ao abrir o arquivo para leitura.\n");
		return 1;
	}

	for (int i = 0; i < 10; i++)
		fscanf(arq, "%d", &v[i]);

	fclose(arq);


	printf("\n numemeros lidos:\n");
	for (int i = 0; i < 10; i++)
		printf("%d ", v[i]);

	printf("\nMC)dia: %.2f\n", calculaMedia(v, 10));

	return 0;
}



