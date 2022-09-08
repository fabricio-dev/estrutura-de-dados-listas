#include <stdio.h>
#include <stdlib.h>

struct no {
	int info;
	struct no* esq;
	struct no* dir;
};
typedef struct no TNODO;

void inserir(TNODO** no, int valor){
	if(*no == NULL){
		*no = (TNODO*) malloc(sizeof(TNODO));
		(*no)->info = valor;
		(*no)->esq = NULL;
		(*no)->dir = NULL;
	} else {
		if( valor < (*no)->info )
		inserir(&(*no)->esq, valor);
	else
		inserir(&(*no)->dir, valor);
	}
}

void imprimir(TNODO** no){
	if(*no != NULL){
		printf("%d", (*no)->info);
		imprimir(&(*no)->esq);
		
		imprimir(&(*no)->dir);
	}
}


void liberar(TNODO** no){
	if((*no) != NULL){
		liberar(&((*no)->esq));
		liberar(&((*no)->dir));
		free(*no);
	}
}



/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	TNODO* arvore = NULL;
	
	inserir(&arvore, 10);
	inserir(&arvore, 5);
	inserir(&arvore, 12);
	inserir(&arvore, 3);
	inserir(&arvore, 8);
	inserir(&arvore, 15);
	inserir(&arvore, 7);
	
	
	imprimir(&arvore);
	
	
	return 0;
}
