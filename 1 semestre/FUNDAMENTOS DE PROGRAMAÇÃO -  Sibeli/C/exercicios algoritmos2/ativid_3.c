#include<stdio.h>
#include<stdlib.h>

int main(){
    float num1, num2, num3;

    printf("Entre como o primeiro numero: ");
    scanf("%f", &num1);

    printf("\nEntre com o segundo numero: ");
    scanf("%f", &num2);

    printf("\nEntre com o terceiro numero: ");
    scanf("%f", &num3);

    if (num1 < num2 && num1 < num3){
        if (num2 < num3){
            printf("O numero maior: %.2f", num3);
        } else{
            printf("O numero maior: %.2f", num2);
        }
    } else {
        if (num2 < num1 && num2 < num3){
            if (num1 < num3){
                printf("O numero maior: %.2f", num3);
            } else {
                printf("o numero maior: %.2f", num1);
            }
        }else {
        if (num1 < num2){
            printf("O numero maior: %.2f", num2);
        } else {
            printf("O numero maior: %.2f", num1);
        }
    }
    }
}
