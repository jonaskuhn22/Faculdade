#include<stdio.h>
#include<stdlib.h>

int main(){

    int a;

    printf("Digite um numero entre 0 e 10 =>");
    scanf("%d", &a);

    switch(a){
        case 0:
            printf("Zero");
            break;
        case 1:
            printf("Um");
            break;
        case 2:
            printf("Dois");
            break;
        case 3:
            printf("Tres");
            break;
        case 4:
            printf("Quatro");
            break;
        case 5:
            printf("Cinco");
            break;
        case 6:
            printf("Seis");
            break;
        case 7:
            printf("Sete");
            break;
        case 8:
            printf("Oito");
            break;
        case 9:
            printf("Nove");
            break;
        case 10:
            printf("Dez");
            break;
        default:
            printf("Numero invalido");
            break;
    }



}
