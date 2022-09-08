#include <stdio.h>
#include <stdlib.h>

struct Nodo {
    int info;
    struct Nodo* prox;
    struct Nodo* ant;
};

typedef struct Nodo no;

no* inicializa ();

no* insere (no* n, int valor);

void imprimir(no* n);

int vazia (no* n);

no* busca (no* n, int valor);

no* retira (no* n, int valor);

void libera (no* n);

