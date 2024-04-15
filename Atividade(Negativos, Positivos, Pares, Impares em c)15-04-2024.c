#include <stdio.h>
#include <locale.h>

#define SIZE 5

int main() {
	
 int positivos = 0, negativos = 0;
 int pares = 0, impares = 0;
 int numerosInseridos = 0;
 int valores[SIZE];
 int i;
	
	setlocale(LC_ALL,"");
	
	for ( i = 0; i < SIZE; i++) {
		
	printf("Digite um número: ");
	scanf("%i",&valores[i]);
	
	numerosInseridos++;
	
	if (valores[i] < 0) {
		negativos++;
	} else {
		positivos++;
	}
		
	if (valores[i] % 2 == 0) {
		pares++;
	} else {
		impares++;
	}
		
	}
	
	printf("\n\n\n\t\tResultados: \n\n");
	printf("\nQuantidade de números pares: %i \n",pares);
	printf("\nQuantidade de números impares: %i \n",impares);
	printf("\nQuantidade de números positivos: %i \n",positivos);
	printf("\nQuantidade de números negativos: %i \n",negativos);
	
	return 0;	
}
