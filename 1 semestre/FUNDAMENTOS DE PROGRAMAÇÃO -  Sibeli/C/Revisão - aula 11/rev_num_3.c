/*3 - Fa�a um programa que imprima na tela todos os n�meros pares de um intervalo
informado pelo usu�rio.*/

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
