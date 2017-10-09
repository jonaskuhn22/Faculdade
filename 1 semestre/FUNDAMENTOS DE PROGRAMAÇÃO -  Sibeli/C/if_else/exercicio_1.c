#include<stdio.h>
#include<stdlib.h>

int main(){
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num > 0){
        printf("\nEle e positivo!\n\n\n");
    } else {
        if(num < 0){
            printf("\nEle e negativo\n\n\n");
        } else {
                printf("\nZero\n\n\n");
        }
    }
}

