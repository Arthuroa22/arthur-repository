#include<stdio.h>
int main() {
	int alunos, monitores, total;
	printf("digite o numero de alunos: ");
	scanf("%d", &alunos);

	printf("digite o numero de monitores: ");
	scanf("%d", &monitores);

	total = alunos + monitores;

	if (total<=50) {
		printf ("total de passageiros: %d\n", total);
		printf("a viagem vai acontecer\n");
	}
	else {
		printf("total de passageiros:%d\n",total);
		printf("nao vai acontecer\n");
	}

	return 0;

}