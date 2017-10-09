#include<stdio.h>
#include<stdlib.h>

int main(){

    int vetor[10], a, impar, par;

    impar=0;
    par=0;

    for(a=0; a<10; a++){
        printf("Digite o %d numero ->", a);
        scanf("%d", &vetor[a]);
    }

    for(a=0; a<10; a++){
        printf("\n%d", vetor[a]);
    }

    for(a=0; a<10; a++){
        if(vetor[a] %2 == 0){
            par=par+1;
        }else{
            impar=impar+1;
        }
    }

    printf("\n\nPares: %d \nImpar: %d", par, impar);
}
