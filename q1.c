#include <stdio.h>
#define quantidade 10

int main() {
    int pesquisa[quantidade];
    int op, cont;

    // ler a avaliacao da galera sobre a nota
    for (int i = 0; i < quantidade; i++) {
        printf("Digite sua nota: ");
        scanf("%d", &op);
        pesquisa[i] = op;
    }

    for (int j = 0; j < 11; j++) {
        cont = 0;
        for (int i = 0; i < quantidade; i++) {
            if (pesquisa[i] == j) {
                cont++;
            }
        }
        printf("Quantidade com nota igual a %d:%d\n", j, cont);
    }

    return 0;  // ✅ Faltava retornar 0 para indicar fim do programa
}  // ✅ Fecha apenas o main

    
