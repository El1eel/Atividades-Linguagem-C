#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "");
	
	float valorMaca, quantidadeMaca, valorPagar;
	
	printf("Quantidade de Maças desejadas: ");
	scanf("%f",&quantidadeMaca);
	
	
	if (quantidadeMaca >= 12) {
		valorMaca = 1.00;
	 } else {
		valorMaca = 1.30;
	 }

	valorPagar = (valorMaca * quantidadeMaca);
	
	printf("Total a pagar: %.2f \n",valorPagar);
    
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
