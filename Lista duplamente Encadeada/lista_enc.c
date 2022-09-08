#include "lista_enc.h"

no* inicializa () {
    return NULL;
}

no* insere (no* n, int valor) {
    no* novo = (no*) malloc(sizeof(no));
    novo->info = valor;
    novo->prox = n;
    return novo;
}

void imprimir(no* n){
    no* p;
    for(p = n; p != NULL; p = p->prox) {
        printf("%d\n", p->info);
    }
}

int vazia (no* n) {
    return (n == NULL);
}

no* busca (no* n, int valor) {
    no* p;
    for (p = n; p != NULL; p = p->prox){
        if (p->info == valor){
            return p;
        }
    }
    return NULL; /* não achou o elemento */
}

no* retira (no* n, int valor) {
    no* ant = NULL; /* ponteiro para elemento anterior */
    no* p = n; /* ponteiro para percorrer a lista*/
    /* procura elemento na lista, guardando anterior */
    while (p != NULL && p->info != valor) {
        ant = p;
        p = p->prox;
    }
    /* verifica se achou elemento */
    if (p == NULL)
        return n; /* não achou: retorna lista original */
    /* retira elemento */
    if (ant == NULL) {
        /* retira elemento do inicio */
        n = p->prox;
    } else {
        /* retira elemento do meio da lista */
        ant->prox = p->prox;
    }

    free(p);
    return n;
}

void libera (no* n) {
    no* p = n;
    while (p != NULL) {
        no* t = p->prox; /* guarda referência para o próximo elemento*/
        free(p); /* libera a memória apontada por p */
        p = t; /* faz p apontar para o próximo */
    }
}
