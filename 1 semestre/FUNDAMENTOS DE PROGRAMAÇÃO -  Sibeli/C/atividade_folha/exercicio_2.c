#include<stdio.h>
#include<stdlib.h>

int main(){
    int A, B;

    printf("Entre com o valor de A (1 ou 2):");
    scanf("%d", &A);

    printf("Entre com o valor de B (1 ou 2):");
    scanf("%d", &B);

    printf("\nAmarelo,");

    if (A == 1){
        printf(" Azul, Verde, Roxo, Uva.\n");
    } else {
        printf(" Pera,");
    } if (B == 1){
        printf(" Maca, Uva.\n");
    } else {
        printf("Morango, Uva.\n");
    }
}
