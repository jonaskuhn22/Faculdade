#include<stdio.h>
#include<stdlib.h>
int main(){

    int num, x, soma;
    x=0;
    soma=0;



    while (x<=10){
    printf("Digite o numero: \n");
    scanf("%d", &num);

    soma = soma + num;
    x++;
    }


    printf("%d", soma);
}
