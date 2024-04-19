#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main() {
	setlocale(LC_ALL,"");
int i, j;
char banda[3][50],integrantes[5][100];

for (i = 0; i < 3; i++) {
	
	printf("Escreva o nome da %iª banda: ", i+1);
	scanf("%s", &banda[i]);
	
		 system("clear || cls");
	
	    	for (j = 0; j < 5; j++) {
	    		
	    		 printf("\nDigite o nome do %iª integrante: ", j+1);
	    		 scanf("%s", &integrantes[i][j]);
	    		
			}
			
			system("clear || cls");
			
}

for (i = 0; i < 3; i++) {
	
	printf("Nome da banda: %s\n ", i+1, banda[i]);
	printf("\n");
			 for (j = 0; j < 5; j++) {
			 	
			 	 printf("\nNome do %iª integrante: %s\n", j+1, integrantes[i][j]);
			 	 printf("\n");
			 	
			 }
	
}


	return 0;
}

