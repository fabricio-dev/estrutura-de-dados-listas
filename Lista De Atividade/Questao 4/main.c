#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int valor;
	struct Lista* pro;
} Lista;


void InserirLista(Lista* lista, int x){
	
	Lista *nova = (Lista*) malloc(sizeof(lista));
	
	nova->valor = x;
	lista->pro = nova;
}

void ImprimeLista(Lista* lista){
	
	while(lista != NULL){
		printf("%d\n", lista->valor);
		ImprimeLista(lista->pro);
	}
	
}



/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	Lista* lista;
	
	lista = NULL;
	
	InserirLista(&lista, 2);
	InserirLista(&lista, 4);
	InserirLista(&lista, 5);
	InserirLista(&lista, 6);
	InserirLista(&lista, 7);
	InserirLista(&lista, 9);
	
	ImprimeLista(&lista);
	
	
	return 0;
}
