/*5 - Para doar sangue é necessário ter entre 18 e 67 anos. Faça um programa que
pergunte a idade de uma pessoa e diga se ela pode doar sangue ou não.*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int id;

    printf("___Voce pode doar sangue??\n");
    printf("___Vamos ver...\n");

    printf("Digite sua idade: ");
    scanf("%d", &id);

   if(id>=18 && id<=67){
        printf("\nVoce pode doar!! :)\n\n");
    }else {
        printf("\nVoce nao pode doar!! :(\n\n");
    }
}
