//2 – Receba a altura de 5 pessoas e mostre a média de altura destas pessoas.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int a;
    float b, soma, med;
    a=1;
    soma=0;

    while(a<=5){
        printf("Pessoa %d, digite sua altura: ", a);
        scanf("%f", &b);
        soma=soma + b;
    a++;
    }
    med=soma/5;
    printf("Media das altura = %.2f\n\n\n", med);
}
