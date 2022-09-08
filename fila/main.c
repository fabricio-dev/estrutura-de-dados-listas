#include <stdio.h>
#include <stdlib.h>
#define MAXFILA 4
struct queue{
	int item[MAXFILA];
	int inic, fim ,total;
};
void iniciaFila(struct queue *pq){
pq->inic=0;
pq->fim=0;
pq->total=0;
}
int filaVazia(struct queue *pq){
	return(pq->total==0);	
	
}
int filaCheia(struct queue *pq){
	return(pq->total==MAXFILA);
}

int adc(int i){
	i++;
	if(i>(MAXFILA-1)){
		return 0;
	}else{
		return i;
	}
}
void enqueue(struct queue *pq, int x){
	if(!filaCheia(pq)){
		pq->item[pq->fim]=x;
		pq->fim=adc(pq->fim);
		pq->total++;
	}else{
		printf("fila cheia");
	}
}

int dequeue(struct queue *pq){
	int aux;
	if(!filaVazia(pq)){
		aux = pq->item[pq->inic];
		pq->inic = adc(pq->inic);
		pq->total--;
		return aux;
	}else{
		printf("fila vazia");
		exit(0);
	}
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	return 0;
}
