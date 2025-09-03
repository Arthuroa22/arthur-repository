#include<stdio.h>

int main() {
	int n, i;
	float a,b,c, media;

	printf(" Digite a quantidade de teste: ");
	scanf("%d", &n);

	for (i=0; i < n; i++) {
		printf("\n Digite os 3 valores reais: ");
		scanf("%f %f %f", &a, &b, &c);

		media = (a * 2.0f + b * 3.0f + c * 5.0f)/ 10.0f;
		printf( "A media poderada do caso %d eh: %.1f\n",i+ 1, media);

	}
	return 0;
}