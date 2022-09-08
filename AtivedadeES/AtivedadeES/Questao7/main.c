#include <stdio.h>
#include <stdlib.h>
#define MAXPILHA 10
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

    struct stack s,d;
    int valor, i = 0,topS,topD;

    init(&s);
    init(&d);

    push(&s,4);
    push(&s,2);
    push(&s,3); 
    push(&s,10);
    push(&s,5); 

 printf("Informe posição");
   scanf("%d",&valor);

    while(i <= valor){

        push(&d,pop(&s));
        

        topD = itemTopo(&d);

        i++;
    }

    int i1 = i;
    int cont = 0;


   

    while(cont < i1){

        push(&s,pop(&d));
        
        cont++;

    }

    printf("%d\n",itemTopo(&s));
    
    printf("Valor da posição Acessada: %d\n",topD);

    return 0;
}

