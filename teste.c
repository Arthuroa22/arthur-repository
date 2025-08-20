#include<stdio.h>
int main() {
	float base, altura, perimetro, area;

	printf("digite a base: ");
	scanf("%f", &base);

	printf("digite a altura: ");
	scanf("%f", &altura);

	perimetro = 2*(base+altura);
	area = (base * altura);

	printf("perimetro: %2.f\n", perimetro);
	printf("area: %2.f\n", area);
}



