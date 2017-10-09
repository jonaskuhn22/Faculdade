#include<stdio.h>
#include<stdlib.h>

int main(){

    int a;

    printf("Eu posso doar sangue?\n");

    printf("Digite sua idade =>");
    scanf("%d", &a);

    if(a>=18 && a<=67){
        printf("\nVoce pode doar!!!! :)\n\n");
    } else {
        printf("\nVoce nao pode doar sangue! :(\n\n");
    }



}
