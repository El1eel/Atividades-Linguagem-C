#include <stdio.h>
#include <locale.h>

#define TAM 2

int main() {
	setlocale(LC_ALL,"");
	
	int idade[TAM];
	char nome[TAM][200];
	int i;
	
	for (i = 0; i < TAM; i++) {
		fflush(stdin);
		printf("\n\nDigite o %dº nome: ", i+1);
		scanf("%s",&nome[i]);
		
		printf("\nDigite a idade: ", i+1);
		scanf("%i",&idade[i]);
	}
	
	printf("\n\nResultados: ");
	for (i = 0; i < TAM; i++) {
		printf("\n%i pessoa \n ",i+1);
		printf("Nome: %s \n", nome[i]);
		printf("Idade: %i \n", idade[i]);
	}
	
	
	return 0;
}
