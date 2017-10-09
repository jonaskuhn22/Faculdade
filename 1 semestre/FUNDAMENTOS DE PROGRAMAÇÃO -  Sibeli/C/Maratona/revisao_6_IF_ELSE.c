#include<stdio.h>
#include<stdlib.h>

int main(){

    int pl, sl;
    float val;

    printf("      PLANOS de porcentagem\nA - 10\nB - 15\nC - 20");

    printf("\n\nEntre com seu plano =>");
    scanf("%c", &pl);

    printf("Entre com seu salario atual (separe por '.' ponto) =>");
    scanf("%d", &sl);

    if(pl=='A' || 'a'){
        val= sl * 10/100;
        printf("Seu salario vai ser %.2f", val);
    }

}
