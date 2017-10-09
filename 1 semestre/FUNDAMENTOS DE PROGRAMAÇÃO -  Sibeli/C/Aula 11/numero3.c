/*3 - Faça um programa que imprima na tela todos os números pares de um intervalo
informado pelo usuário.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int a, b, c;

    printf("Digite um numero=> ");
    scanf("%d", &a);

    printf("Digite um numero (maior que o anterior)=> ");
    scanf("%d", &b);

    for(c=a; c<=b; c++){

        if(c%2 == 0){
            printf("\n%d", c);
        }
    }
}
