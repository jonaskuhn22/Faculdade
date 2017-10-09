#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    switch(n){
        case 1:
            printf("Numero 1");
            break;
        case 2:
            printf("Numero 2");
            break;
        case 3:
            printf("Numero 3");
            break;
        case 4:
            printf("Numero 4");
            break;
        default:
            printf("Diferente de 1 a 4");
            break;
    }
}
