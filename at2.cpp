#include <stdio.h>

int main() {
	
int anoNascimento, idade, idadeMin = 18, idadeMax = 65, anoAtual = 2024;
char nome[50];

printf("DIGITE SEU NOME: ");
	scanf("%s", nome);
	
printf("O ANO EM QUE VOCE NASCEU: ");
	scanf("%i",&anoNascimento);
	
	idade = anoAtual - anoNascimento;
	
if (idade >= idadeMin && idade < idadeMax) {
printf("VOCE E OBRIGADO A VOTAR!");
} else {
	printf("VOCE NAO E OBRIGADO A VOTAR!");
}
	return 0;
}
