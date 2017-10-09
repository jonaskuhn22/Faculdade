/*3 - Faça um programa que imprima na tela todos os números pares de um intervalo
informado pelo usuário.*/

#include<stdio.h>
#include<stdlib.h>
int main(){
    int a, b, c;
    printf("Digite o numero que inicia o intervalo => ");
    scanf("%d", &a);
    printf("Digite o numero que finaliza o intervalo => ");
    scanf("%d", &b);
    for(c=a; c<=b; c++){
        if(c%2 == 0){
            printf("%d - PAR\n", c);
        }else{
            printf("%d - IMPAR\n", c);
        }
    }
}
