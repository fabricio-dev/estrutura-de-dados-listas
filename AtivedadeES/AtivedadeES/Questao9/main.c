#include <stdio.h>
#include <stdlib.h>
#define MAXPILHA 100
#define MAX 100
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


struct stack{
    int topo;
    char item[MAXPILHA];
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

int push(struct stack *ps, char x){
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
    int x = 0;
    int cont=0;
    int cont1=0;
    int contPushP2=0;
    
    
    int vcont=0;
    char valor[100];
    char saida[100];
    char ts=NULL;
	init(&p1);
    init(&p2);
    
   
    
    
    
    printf("Digite expressao: ");
    scanf("%s",&valor);
    
    while(vcont<sizeof(valor)){ 
	
	  // verifica a quantidade de caracteres da epressao
    if(valor[vcont]==ts){
    	break;
	}
    vcont++;
	}
	
    while(x<vcont){
	   push(&p1,valor[x]); // esta impilhando valore nulos e lixo
       
       x++;
	}
	
	while(x>0){
	  char vPopP1;
	  char vPopP2;
	  vPopP1=pop(&p1);
	  
	  if((vPopP1=='-')||(vPopP1=='+')||(vPopP1=='*')||(vPopP1=='/')||(vPopP1=='^')){
	 
	  saida[cont]=')';
	  cont++;
	  push(&p2,'(');
	  contPushP2++;
	  push(&p2,vPopP1);
	  contPushP2++;
	  
	
	  }else{
	     
	   	    saida[cont]=vPopP1;
		    cont++;
		    
		    while(100){
			vPopP2=pop(&p2);
		    	
			saida[cont]=vPopP2;
			
		    cont++;  
		    
		    
		    if(vPopP2!='('){
		    	break;
			}
		    if(isEmpty(&p2)){
		    break;	
			}
	       }
		
	   }

     
    x--;	
	
	}
	
    
    x=cont;
    
    while(x>=0){
    printf("%c",saida[x]);
    x--;
    
	}

	
	return 0;
}
