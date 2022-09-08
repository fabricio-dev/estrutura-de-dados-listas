#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <stdio.h>
#include <stdlib.h>
#define MAXPILHA 4
#define MAX 4
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


struct stack{
    int topo;
    int item[MAXPILHA];
};

void init(struct stack *ps){
    ps->topo=-1;
}

int isEmpty(struct stack *ps){
    return(ps->topo==-1);
}

int isFull(struct stack *ps){
    return(ps->topo==(MAXPILHA-1));
}

int push(struct stack *ps, int x){
    if(isFull(ps)){
        printf("Cheia");
        exit(1);
    }else{
        return(ps->item[++(ps->topo)] = x);
    }
}

int pop (struct stack *ps){
    if(isEmpty(ps)){
        printf("Vazia");
        exit(1);
    }else{
        return (ps->item[ps->topo--]);
    }
}

int itemTopo(struct stack *ps){
    if(isEmpty(ps)){
        printf("Vazia");
        exit(1);
    }else{
        return (ps->item[ps->topo]);
    }
}




int main(int argc, char *argv[]) {
	struct stack p1,p2;
	int i = MAX-1;
	int z=0;
	int x=0;
	char valor[MAX];
	init(&p1);
	
    init(&p2);
    
    
    int a=0,b=0;
    
    for(a=0;a<10;a++){
   	x=0;
   	
   	
    while(x<MAX){
       push(&p1,b); // esta impilhando de 7 em 7
       x++;
       b++;
	}
	
	while(z<MAX){
	   int t=0;
	   t=pop(&p1);	
	   push(&p2,t);	
       z++;
       
	}

	while(z>0){//testar na outra
	   printf("%d\n",pop(&p2));	
       z--;
	}
	}
	return 0;
}
