#include<stdio.h>
#include<stdlib.h>

int main(){

    int cod, quant;
    float tot;

    printf("Entre com o codigo do produto =>");
    scanf("%d", &cod);

    printf("Entre com a quantidade de produtos =>");
    scanf("%d", &quant);

    switch(cod){
        case 100:
            tot=1.20 * quant;
            printf("Total a pagar = %.2f", tot);
            break;
        case 101:
            tot=1.30 * quant;
            printf("Total a pagar = %.2f", tot);
            break;
        case 102:
            tot=1.40 * quant;
            printf("Total a pagar = %.2f", tot);
            break;
        case 103:
            tot=1.50 * quant;
            printf("Total a pagar = %.2f", tot);
            break;
        case 104:
            tot=1.60 * quant;
            printf("Total a pagar = %.2f", tot);
            break;
        case 105:
            tot=1.70 * quant;
            printf("Total a pagar = %.2f", tot);
            break;
        default:
            printf("______?ERROR?_____");
            break;
    }
}
