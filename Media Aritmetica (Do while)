#include <stdio.h>
#include <locale.h>
//#include <string.h>

int main() {
	
setlocale(LC_ALL, "");

char resposta;
int contador = 0;
float media,  nota,  soma = 0;

	do {
		printf("Insira uma nota: ");
		scanf("%f",&nota);
		
		fflush(stdin);
		
		printf("Deseja inserir mais uma nota? ");
		scanf("%c",&resposta);
		resposta = toupper(resposta);
		
		soma += nota;
		contador++;
	} while(resposta != 'N');
	
media = (soma / contador);

printf("\nResultados:\n");
printf("Media: %.1f \n", media);
printf("Quantidade de notas: %i \n", contador);	
	
return 0;
}
