#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main() {
    setlocale(LC_ALL,"");

    char disciplina[3][50];
    float nota[3][2], media[3] = {0}, soma[3] = {0};
    int c, l;

    for (c = 0; c < 3; c++) {
        printf("\nDigite o nome da %i� disciplina: ", c+1);
        scanf("%s", disciplina[c]);

        for (l = 0; l < 2; l++) {
            printf("\nDigite a %i� nota: ", l+1);
            scanf("%f", &nota[c][l]);
            soma[c] += nota[c][l]; // Adicionando a nota � soma da disciplina
        }

        system("clear || cls");
        media[c] = soma[c] / 2; // Calculando a m�dia da disciplina
    }

    for (c = 0; c < 3; c++) {
        printf("\nNome da disciplina: %s", disciplina[c]);
        printf("\n");

        for (l = 0; l < 2; l++) {
            printf(" %i� Nota: %.2f\n", l+1, nota[c][l]);
        }

        printf("M�dia: %.2f\n\n", media[c]); // Imprimindo a m�dia da disciplina
    }

    return 0;
}

