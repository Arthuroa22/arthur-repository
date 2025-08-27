#include<stdio.h>
int main() {
	int n;
	printf ("digite o valor n: ");
	scanf("%d", &n);
	printf (" numeros de 1 a 100 que divididos por %d tem resto 2:\n", n);
	for (int i = 1; i <= 100; i++) {
		if (i % n == 2) {
			printf("%d ", i);
		}
	}
	printf("\n");
	return 0;

}