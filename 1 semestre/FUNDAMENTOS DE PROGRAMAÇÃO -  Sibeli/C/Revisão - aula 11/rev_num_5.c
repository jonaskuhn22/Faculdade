/*5 � Fa�a um programa que receba um n�mero inteiro qualquer e apresente todos os
n�meros informando se ele � par ou �mpar. Mostre os n�meros de um at� o n�mero
digitado pelo usu�rio:
    Regra: variaval%2==0
    Se o resultado for igual � zero (==0) � par
    Se o resultado for diferente de zero (!=0) � �mpar*/

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
