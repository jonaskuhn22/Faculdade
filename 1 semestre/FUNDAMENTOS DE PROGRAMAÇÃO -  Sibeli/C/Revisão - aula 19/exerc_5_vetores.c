//Faça um programa que receba 20 números e armazene-os em um vetor. Exiba o vetor
//na ordem inversa.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int vetor[5];
    int a;

    for(a=0;a<5;a++){
        printf("Entre com o valor para vator[%d] -> ", a);
        scanf("%d", &vetor[a]);
    }

    printf("\n");

    for(a=4;a>=0;a--){
        printf("Valor vetor[%d] => %d\n", a, vetor[a]);
    }

}
