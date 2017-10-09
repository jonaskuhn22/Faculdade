#include<stdio.h>
#include<stdlib.h>

main(){
    float A, B, resultado;
    char op;

    printf("CALCULADORA.\n\n");

    printf("Entre com o valor A: ");
    scanf("%f", &A);

    printf("\nEntre com o valor B: ");
    scanf("%f", &B);

    printf("\n\nEntre com o operador matematico => ");
    scanf("%s", &op );

    if(op == '+'){
        printf("\n\nRESULTADO -> %.2f + %.2f = %.2f\n\n", A,B, A+B);
    }else if(op == '-'){
        printf("\n\nRESULTADO -> %.2f + %.2f = %.2f\n\n", A,B, A-B);
    }else if(op == '*'){
        printf("\n\nRESULTADO -> %.2f + %.2f = %.2f\n\n", A,B, A*B);
    }else if(op == '/'){
        printf("\n\nRESULTADO -> %.2f + %.2f = %.2f\n\n", A,B, A/B);
    }
}
