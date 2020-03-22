#include <stdio.h>

#define MAX		300
/* Le pedimos al usuario una serie de números que vamos a
ir guardando en un array, cargamos otro array con los cuadrados
de dichos valores y luego imprimimos los dos arrays */

int main(void) {

	int entrada[MAX];
	int salida[MAX];

	unsigned int count = 0;
	unsigned int i = 0;
	int numero = -1;

	while (numero != 0) {
		printf("Ingresar un número (0 para terminar): ");
		scanf("%d", &numero);
		entrada[count] = numero;
		count ++;
	}

	/* calcular e imprimir*/
	while (i < count - 1) {
		salida[i] = entrada[i] * entrada[i];
		printf("%d: %d\n", entrada[i], salida[i]);
		i ++;
	}

	return 0;
}
