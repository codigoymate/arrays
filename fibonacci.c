#include <stdio.h>

#define MAX		30

/* Cargar la Serie de Fibonacci en un array e imprimir sus
elementos */

/*
	0  1  1  2   3    5    8    13  . ....
*/ 

int main() {

	unsigned long int serie[MAX];
	unsigned int i = 2;
	double relacion;

	serie[0] = 0;
	serie[1] = 1;

	while (i < MAX) {
		serie[i] = serie[i - 1] + serie[i - 2]; i++;
	}

	i = 0;
	while (i < MAX) {
		printf("%lu ", serie[i]); i ++;
	}

	printf("\n");

	relacion = (double)serie[MAX - 1] / (double)serie[MAX - 2];

	printf("%f\n", relacion);

	return 0;
}
