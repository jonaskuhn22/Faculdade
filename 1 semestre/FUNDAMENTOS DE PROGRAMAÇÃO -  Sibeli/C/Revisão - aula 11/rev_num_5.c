/*5 – Faça um programa que receba um número inteiro qualquer e apresente todos os
números informando se ele é par ou ímpar. Mostre os números de um até o número
digitado pelo usuário:
    Regra: variaval%2==0
    Se o resultado for igual à zero (==0) é par
    Se o resultado for diferente de zero (!=0) é ímpar*/

#include<stdio.h>
#include<stdlib.h>
int main(){
    int a, b;
    printf("Digite um numero =>");
    scanf("%d", &b);
    for(a=1; a<=b; a++){
        if(a%2 == 0){
            printf("\n%d - PAR", a);
        }else{
            printf("\n%d - IMPAR", a);
        }
    }
}
