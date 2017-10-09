#include<stdio.h>
#include<stdlib.h>

int main(){

    int a;
    float b, tot, med;

    tot=0;
    for(a=1; a<=5; a++){
        printf("Entre com a altura da %d pessoa => ", a);
        scanf("%f", &b);
        tot=tot + b;
    }
    med= tot / 5;
    printf("Media das alturas = %.2f", med);
}
