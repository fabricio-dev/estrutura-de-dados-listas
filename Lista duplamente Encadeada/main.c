#include <stdio.h>
#include <stdlib.h>
#include "lista_enc.h"

int main(int argc, char** argv) {
    no* n;
    n = inicializa();
    n = insere(n, 10);
    n = insere(n, 30);
    n = insere(n, 90);
    imprimir(n);
    n = retira(n, 30);
    printf("Retirou o 30\n");
    imprimir(n);
    libera(n);

    return (EXIT_SUCCESS);
}
