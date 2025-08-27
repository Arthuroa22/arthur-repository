#include<stdio.h>
#include<math.h>

int main() {
	float x, y, z, resultado;
	char opcao;

	printf ("digite tres valores: ");
	scanf("%1f %1f %1f", &x, &y,&z);

	printf("esolha a media (A=aritmetica, P= ponderada, G= geometrica, H=harmonica: ");
	scanf(" %c", &opcao);
	if(opcao=='A' || opcao =='a') {
		resultado = (x+y+z)/3.0;
	}
	else if (opcao=='P' || opcao=='p') {
		resultado = (1*x + 2*y + 3*z)/6.0;
	}
	else if (opcao=='G' || opcao== 'g') {
		resultado = pow(x * y * z, 1.0/3.0);
	}
	else if (opcao == 'H' || opcao == 'h') {
		resultado = 3.0/ ((1/x) + (1/y) + (1/z));
	}
	printf("resultado da media: %21f\n", resultado);

	return 0;
}
