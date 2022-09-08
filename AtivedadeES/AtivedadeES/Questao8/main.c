/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include <stdio.h>
#include <stdlib.h>
#define MAXPILHA 10
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct stack{
    int item[MAXPILHA];
};

void init(struct stack *ps){
    ps->item[0]=-1;
}

int isEmpty(struct stack *ps){
    return(ps->item[0]==-1);
}

int isFull(struct stack *ps){
    return(ps->item[0]==(MAXPILHA-1));
}

int push(struct stack *ps, int x){
	if(isEmpty(ps)){
     ps->item[0]=0;   
    }
    if(isFull(ps)){
        printf("Cheia");
        exit(1);
    }else{
        return(ps->item[(++ps->item[0])] = x);
    }
}

int pop (struct stack *ps){
    if(isEmpty(ps)){
        printf("Vazia");
        exit(1);
    }else{
        return (ps->item[ps->item[0]--]);
    }
}

int itemTopo(struct stack *ps){
    
        return (ps->item[0]);
    
}
int main(int argc, char *argv[]) {
	
	struct stack s,d;
    int valor, i = 0,topS,topD;

    init(&s);
    init(&d);

    push(&s,10);
    push(&s,10);
    push(&s,10);
    push(&s,10);
    push(&s,10);
    push(&s,10);
    pop(&s);
    printf("%d",itemTopo(&s));
	return 0;
}
