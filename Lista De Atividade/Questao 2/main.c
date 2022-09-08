#include <stdio.h>
#include <stdlib.h>
#define MAX 50

/*PILHA*/

struct no{
	char info;
	struct no* esq;
	struct no* dir;
};

typedef struct no Arvore;

typedef struct {
	int topo;
	int Item[MAX];
} Pilha;

void init(Pilha *p){
	p->topo - 1;
}

int PilhaVazia(Pilha *p){
	return (p->topo == -1);
}

int PilhaCheia(Pilha *p){
	return ((p->topo) == (MAX - 1));
}

void InserirPilha(Pilha *p, int x){
	if(PilhaCheia(p)){
		printf("Pilha Cheia");
	}else{
		p->topo++;
		p->Item[p->topo] = x;
	}
}

int RemoverPilha(Pilha *p){
	int aux;
	if(PilhaVazia(p)){
		printf("Pilha Vazia");
		exit(0);
	}else{
		aux = p->Item[p->topo];
		p->topo--;
		return aux;
	}
}

Arvore *posicao = (Arvore*) NULL;

void InserirArvore(Arvore** n){
	
}

//função que cria um novo Nó na arvore
void teste(Arvore** n, Pilha* p, int* pos){
	if((*n) == NULL){
		
		//adiciona um nó
		(*n)= (Arvore*) malloc(sizeof(Arvore));
		(*n)->info = '#';
		(*n)->dir = NULL;
		(*n)->esq = NULL;
		posicao = (*n)->esq;
	}else{
		pos++;
		teste(&(*n)->esq, &p, &pos);
	}
}


//adiciona o valor
void AdicionarItem(Arvore** n, int dire, int* pos, char x){
	
	if(dire == 0){
		//esquerda
		
		//percorre a arvore
		while((*n)->esq != NULL){
			
		}
		
		
	}else{
		//direita
	}
	
}



//Imprime arvore
void ImprimirArvore(Arvore** n){
	if(*n != NULL){
		ImprimirArvore(&(*n)->esq);
		printf("%c\n", (*n)->info);
		ImprimirArvore(&(*n)->dir);
	}
	
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	Arvore* No = NULL;
	int i, pos = 0, dire;
	char expressao[50];
	Pilha* p;
	
	init(p);
	
	gets(expressao);
	
	for(i = 0; i< strlen(expressao); i++){
		
		switch(expressao[i]){
			case '(':
				teste(&No, &p, &pos);
				break;
			case ')':
				break;
			case '+':
				break;
			case '-':
				break;
			case '*':
				break;
			case '/':
				break;
			default:
				printf("");
				AdicionarItem(&No, dire, &pos, expressao[i]);
		}
		
	}
	
	ImprimirArvore(&No);
	
	return 0;
}
