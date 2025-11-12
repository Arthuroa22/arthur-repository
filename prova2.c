#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	char matriz[3][3][50];
	char modificado[3][3][50];
	int i, j;


	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("Digite a string da posicao [%d][%d]: ", i, j);
			scanf("%49s", matriz[i][j]);
			strcpy(modificado[i][j], matriz[i][j]);
		}
	}


	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			int len = strlen(modificado[i][j]);
			char ini = tolower(modificado[i][j][0]);
			char fim = tolower(modificado[i][j][len - 1]);

			if ((ini == 'a' || ini == 'e' || ini == 'i' || ini == 'o' || ini == 'u') &&
			        (isalpha(fim) && !(fim == 'a' || fim == 'e' || fim == 'i' || fim == 'o' || fim == 'u'))) {


				for (int k = 0; k < len / 2; k++) {
					char algo = modificado[i][j][k];
					modificado[i][j][k] = modificado[i][j][len - 1 - k];
					modificado[i][j][len - 1 - k] = algo;
				}
			}
		}
	}


	printf("matriz original:  \n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++)
			printf("%s\t", matriz[i][j]);
		printf("\n");
	}
	printf("matriz modificada: \n ");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++)
			printf("%s\t", modificado[i][j]);
		printf("\n");
	}

	return 0;
}
















