#include<stdio.h>
#include<stdlib.h>

int main(){
    int n1, n2, n3;

    printf("Entre com o primeiro valor: ");
    scanf("%d", &n1);

    printf("Entre com o segundo valor: ");
    scanf("%d", &n2);

    printf("Entre com o terceiro valor: ");
    scanf("%d", &n3);

    getchar();

    if (n1 < n2 && n1 < n3 && n2 < n3){
        printf("Ordem: %d, %d, %d", n1, n2, n3);
    } else {
        if (n1 < n2 && n1 < n3 && n3 < n2){
            printf("Ordem: %d, %d, %d", n1, n3, n2);
        }
    }
    if (n2 < n1 && n2 < n3 && n1 < n3){
        printf("Ordem: %d, %d, %d", n2, n1, n3);
    } else{
        if (n2 < n1 && n2 < n3 && n3 < n1){
            printf("Ordem: %d, %d, %d", n2, n3, n1);
        }
    }
    if (n3 < n1 && n3 < n2 && n1 < n2){
        printf("Ordem: %d, %d, %d", n3, n1, n2);
    } else {
        if (n3 < n1 && n3 < n2 && n2 < n1){
            printf("Ordem: %d, %d, %d", n3, n2, n1);
        }
    }
}
