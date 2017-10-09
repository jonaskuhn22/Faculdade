#include<stdio.h>
#include<stdlib.h>

int main(){
    float n1, n2;
    char op;

    printf("Primeiro valor: ");
    scanf("%f", &n1);

    printf("Segundo valor: ");
    scanf("%f", &n2);

    printf("Entre com o operador: ");
    scanf("%s", &op);

    getchar();

    switch (op){
        case '+':
            printf("%f + %f = %f",n1,n2,n1+n2);
            break;
        case '-':
            printf("%f - %f = %f",n1,n2,n1-n2);
            break;
        case '*':
            printf("%f * %f = %f",n1,n2,n1*n2);
            break;
        case '/':
            printf("%f / %f = %f",n1,n2,n1/n2);
            break;
        default:
            printf("ERROR");
            break;
    }
}
