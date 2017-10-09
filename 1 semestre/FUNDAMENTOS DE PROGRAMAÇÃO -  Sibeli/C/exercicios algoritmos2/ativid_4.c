#include<stdio.h>
#include<stdlib.h>

int main(){
    int num1, num2, num3, soma;

    printf("Entre com o primeiro numero: ");
    scanf("%d", &num1);

    printf("\nEntre com o  segundo numero: ");
    scanf("%d", &num2);

    printf("\nEntre com o terceiro numero: ");
    scanf("%d", &num3);

    if (num1 < num2 && num1 <num3){
        soma = num2 + num3;

        printf("\n\nSoma dos dois numeros maiores: %d", soma);
    } else {
        if (num2 < num1 && num2 < num3){
            soma = num1 + num3;

            printf("\n\nSoma dos numeros maiores: %d", soma);
        } else {
            soma = num1 + num2;

            printf("\n\nSoma dos numeros maiores: %d", soma);
        }
    }
}
