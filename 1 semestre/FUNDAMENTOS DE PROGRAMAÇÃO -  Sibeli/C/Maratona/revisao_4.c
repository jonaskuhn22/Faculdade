#include<stdio.h>
#include<stdlib.h>
#define PI 3.14
int main(){

    int r, di;
    float comp, ar;

    printf("Digite o raio da circunferencia =>");
    scanf("%d", &r);

    di= 2 * r;
    comp= 2 * PI * r;
    ar= PI * r * r;

    printf("\nDiametro => %d\n", di);

    printf("\nComprimento => %.2f\n", comp);

    printf("\nArea => %.2f\n\n", ar);

}
