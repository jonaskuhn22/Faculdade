/*1 � Receba dois n�meros e verifique qual deles � maior. Apresente o n�mero de maior
valor.*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int a, b;

    printf("Entre com um numero => ");
    scanf("%d", &a);

    printf("Entre com outro numero => ");
    scanf("%d", &b);

    if(a>b){
        printf("\nO numero maior : %d\n\n", a);
    }else if(b>a){
         printf("\nO numero maior : %d\n\n", b);
    }
}
