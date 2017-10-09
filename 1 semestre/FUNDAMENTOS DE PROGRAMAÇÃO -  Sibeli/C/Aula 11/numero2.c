/*2 - Faça um programa onde o usuário digita dois valores, e imprima na tela todos os
valores no intervalo entre os valores digitados.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int a, b, c;

    printf("Digite um numero=> ");
    scanf("%d", &a);

    printf("Digite um numero (maior que o anterior)=> ");
    scanf("%d", &b);

    for(c=a;c<=b;c++){
        printf("\n%d", c);
    }
}
