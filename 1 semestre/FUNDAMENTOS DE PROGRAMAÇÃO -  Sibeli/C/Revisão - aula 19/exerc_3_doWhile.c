#include<stdio.h>
#include<stdlib.h>

int main(){
    int x, soma, num;

    soma=0;
    x=1;

    do{
        printf("Num: ");
        scanf("%d", &num);
        soma= soma + num;
        printf("Soma: %d\n", soma);
    x++;

    }while(x<=5);
    printf("\nResultado Final: %d\n", soma);
}
