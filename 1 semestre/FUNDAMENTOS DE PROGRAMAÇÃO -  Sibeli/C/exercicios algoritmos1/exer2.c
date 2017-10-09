#include<stdio.h>
#include<stdlib.h>
int main(){
    float num1, num2;

    printf("Entre com o primeiro valor:");
    scanf("%f", &num1);

    printf("Entre com o segundo valor:");
    scanf("%f", &num2);

    printf("Numeros digitados: %.2f", num1, num2);

    getchar();
}
