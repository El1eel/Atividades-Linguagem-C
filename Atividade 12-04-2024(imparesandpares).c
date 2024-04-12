#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
	
	int digitos[6];
	int contPares = 0, contImpares = 0;
	int i;
	
	for (i = 0; i < 6; i++) {
		printf("Insira um digíto: ");
		scanf("%i", &digitos[i]);
		
		if (digitos[i] % 2 == 0) {
			contPares++;
		} else {
			contImpares++;
		}
	}
	
		printf("\n\nResultados:\n");
		printf("\nQuantidade de digitos pares: %i",contPares);
		printf("\nQuantidade de digitos impares: %i", contImpares);
	
	return 0;
}
