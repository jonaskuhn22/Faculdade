#include<stdio.h>
#include<stdlib.h>

int main(){

    int a, b;
    float val;


    printf("Entre com o codigo: ");
    scanf("%d", &a);

    printf("Quantidade desse produto: ");
    scanf("%d",&b);

    if(a==100){
        val= 1.20 * b;
        printf("\nValor: %.2f R$\n\n", val);

    }else if(a==101){
        val= 1.30 * b;
        printf("\nValor: %.2f R$\n\n", val);

    }else if(a==102){
        val= 1.40 * b;
        printf("\nValor: %.2f R$\n\n", val);

    }else if(a==103){
        val= 1.50 * b;
        printf("\nValor: %.2f R$\n\n", val);

    }else if(a==104){
        val= 1.60 * b;
        printf("\nValor: %.2f R$\n\n", val);

    }else if(a==105){
        val= 1.70 * b;
        printf("\nValor: %.2f R$\n\n", val);

    }else{
        printf("\nCodigo invalido!!!/n/n");
    }
}
