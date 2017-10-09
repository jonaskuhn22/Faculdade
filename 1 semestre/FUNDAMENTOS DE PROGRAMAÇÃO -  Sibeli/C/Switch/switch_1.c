#include<stdio.h>
#include<stdlib.h>

int main(){
    int num;

    printf("Entre com um dia da semana (1-7): ");
    scanf("%d", &num);

    switch(num){
        case 1:
            printf("\nDomingo.");
            break;
        case 2:
            printf("\nSegunda-feira.");
            break;
        case 3:
            printf("\nTerca-feira.");
            break;
        case 4:
            printf("\nQuarta-feira.");
            break;
        case 5:
            printf("\nQuinta-feira.");
            break;
        case 6:
            printf("\nSexta-feira.");
            break;
        case 7:
            printf("\nSabado.");
            break;
        default:
            printf("\nNao e dia da semana.");
            break;
    }
}
