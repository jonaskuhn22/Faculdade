#include<stdio.h>
#include<stdlib.h>
int main(){
    int a;
    float b, soma, med;

    a=1;
    soma=0;

    do{
    printf("Pessoa %d, Digite sua altura => ", a);
    scanf("%f", &b);

    soma=soma + b;
    a++;
    }while(a<=10);

    med=soma / 5;

    printf("Media das alturas = %.2f", med);

}
