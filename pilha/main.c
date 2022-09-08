#include <stdio.h>

#include <stdlib.h>
#define MAXPILHA 3


struct stack{
	int topo;
	int item[MAXPILHA];
};

void init(struct stack *ps){
	ps->topo=-1;
}

int isEmpty(struct stack *ps){
	return (ps->topo==-1);
}

int isFull(struct stack *ps){
	return (ps->topo==(MAXPILHA-1));
}

int push(struct stack *ps, int x){
	if(isFull(ps)){
		printf("cheio");
		exit(1);
	}else{
		return(ps->item[++(ps->topo)]=x);
	}
}

int pop( struct stack *ps){
	if(isEmpty(ps)){
		printf("vazio");
		exit(1);
	}else{
		return(ps->item[ps->topo--]);
	}
}

int itemTopo(struct stack *ps){
	if(isEmpty(ps)){
	printf("vazio");
		exit(1);	
	}else{
		return (ps->item[ps->topo]);
	}
	
}




/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
struct stack s;

 init(&s);
 
 push(&s,2);
 push(&s,3);
 push(&s,1);

printf("%d",pop(&s));
printf("%d",pop(&s));
	return 0;
}
