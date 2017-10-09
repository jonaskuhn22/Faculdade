#include<stdio.h>
#include<stdlib.h>
int main(){
    int num, x, calc;

    x=0;
    calc=0;

    printf("Digite um numero -> ");
    scanf("%d", &num);

    printf("\n");

    while(x<=num){
        printf("Num: %d \n", x);

        calc=calc + x;

        x++;
    }

    printf("\nSoma dos valores => %d\n\n\n", calc);
}
