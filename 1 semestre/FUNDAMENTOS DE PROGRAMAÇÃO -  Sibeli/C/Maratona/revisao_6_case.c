#include<stdio.h>
#include<stdlib.h>

int main(){

    int pl;
    float sal, val, tot;

    printf("Digite seu plano =>");
    scanf("%c", &pl);

    printf("Digite seu salario =>");
    scanf("%f", &sal);

    switch(pl){
        case 'A':
            val= sal * 0.1;
            tot=val+sal;
            printf("Seu salario vai ser = %.2f", tot);
            break;
    case 'a':
            val= sal * 0.1;
            tot=val+sal;
            printf("Seu salario vai ser = %.2f", tot);
            break;
    case 'B':
            val= sal * 0.15;
            tot=val+sal;
            printf("Seu salario vai ser = %.2f", tot);
            break;
    case 'b':
            val= sal * 0.15;
            tot=val+sal;
            printf("Seu salario vai ser = %.2f", tot);
            break;
    case 'C':
            val= sal * 0.2;
            tot=val+sal;
            printf("Seu salario vai ser = %.2f", tot);
            break;
    case 'c':
            val= sal * 0.2;
            tot=val+sal;
            printf("Seu salario vai ser = %.2f", tot);
            break;
    default:
        printf("Comando invalido");
        break;

    }


}
