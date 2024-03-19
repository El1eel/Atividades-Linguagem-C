#include <stdio.h>

int main() {
	
int num1, num2, media, soma, produto, menValor, maiValor;	
	
	printf("PRIMEIRO NUMERO: ");
	scanf("%i",&num1);
	
	printf("SEGUNDO NUMERO: ");
	scanf("%i",&num2);

	media = (num1 + num2) / 2;
	soma = num1 + num2;
	produto = num1 * num2;
	
	printf("MEDIA: %i", media);
	printf("\nSOMA: %i", soma);
	printf("\nPRODUTO: %i", produto);
	if (num1 > num2) {
		printf("\nO MAIOR NUMERO E: %i", num1);
	} else {
		printf("\nO MAIOR NUMERO E: %i", num2);
	}
	if (num1 < num2) {
	    printf("\nO MENOR NUMERO E: %i", num1);
	} else {
		printf("\nO MENOR NUMERO E: %i", num2);
	} 
	if (num1 == num2) {
		printf("\nOS NUMEROS SAO IGUAIS!");
	} else {
		printf("\nOS NUMEROS SAO DIFERENTES!");
	}
	
	
	
	
	return 0;
	
	
}
