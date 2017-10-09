/*2 – Receba três números e verifique qual deles é maior. Apresente o número de maior
valor.*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int a, b, c;

    printf("Achando o numero maior!!\n");

    printf("\nEntre com um numero => ");
    scanf("%d", &a);

    printf("Entre com outro numero => ");
    scanf("%d", &b);

    printf("Entre com mais um numero => ");
    scanf("%d", &c);

    if(a>b && a>c){
        printf("\nO numero maior => %d\n\n", a);
    }else if(b>c && b>a){
         printf("\nO numero maior => %d\n\n", b);
    }else if(c>b && c>a){
         printf("\nO numero maior => %d\n\n", c);
    }
}
