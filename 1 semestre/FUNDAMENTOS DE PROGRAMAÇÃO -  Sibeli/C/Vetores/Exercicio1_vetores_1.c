/*Escreva um programa que leia um vetor de 10 n�meros inteiros. No final voc� deve
percorrer o vetor e mostrar os valores do vetor que s�o maiores do que o valor da primeira
posi��o do vetor. */

#include<stdio.h>
#include<stdlib.h>

int main(){

    int vetor [3], x, y;

    for(x=0;x<3;x++){
        printf("Digite um numero para o vetor [%d]-> ", x);
        scanf("%d", &vetor[x]);
    }

    printf("\n");

    for(y=1;y<3;y++){
        if(vetor[y] > vetor[0]){
            printf("Valor vetor [%d] => %d\n", y, vetor[y]);
        } else{

        }
    }

}
