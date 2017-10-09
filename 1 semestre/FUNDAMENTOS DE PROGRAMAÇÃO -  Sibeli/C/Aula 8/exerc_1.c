#include<stdio.h>
#include<stdlib.h>

int main(){
    float valor, taxa, dias, total;

    printf("Valor inicial do produto: ");
    scanf("%f", &valor);

    getchar();

    printf("Taxa por dia: ");
    scanf("%f", &taxa);

    getchar();

    printf("Numero de dias: ");
    scanf("%f", &dias);

    getchar();
    total = valor + (valor * ((taxa / 100) * dias));

    printf("Valor inicial do produto: %f", &valor);

    printf("Valor final da prestacao: %f", &total);


}
