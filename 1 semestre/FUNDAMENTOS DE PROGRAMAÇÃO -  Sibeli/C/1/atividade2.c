#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {

    float num1, num2, num3, sum, numdiv, div, media;
    printf("Media 3 notas.\n");

    printf("Digite a primeira nota =>");
    scanf("%f", &num1);

    printf("Digite a segunda nota =>");
    scanf("%f", &num2);

    printf("Digite a terceira nota =>");
    scanf("%f", &num3);

    printf("\nNota 1: %.2f\n", num1);
    printf("Nota 2: %.2f\n", num2);
    printf("Nota 3: %.2f\n", num3);

    sum = num1+num2+num3;
    numdiv = 3;
    div = sum/numdiv;

    printf("\nMedia final: %.2f", div);

    media = 7;
    getchar();

    if (div >= media){
        printf("\n\nAPROVADO!!");
        }
    else{
        printf("\n\nREPROVADO!!\n");
    }

    getchar();
}
