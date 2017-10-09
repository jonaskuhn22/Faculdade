#include<stdio.h>
#include<stdlib.h>

int main(){
    float ladoA, ladoB, ladoC, BC, AC, AB;

    printf("Entre com o primeiro lado: ");
    scanf("%f", &ladoA);

    printf("Entre com o segundo lado: ");
    scanf("%f", &ladoB);

    printf("Entre com o terceiro lado: ");
    scanf("%f", &ladoC);

    BC = ladoB + ladoC;
    AC = ladoA + ladoC;
    AB = ladoA + ladoB;

    //printf("BC: %.2f", BC);
    //printf("AC: %.2f", AC);
    //printf("AB: %.2f", AB);

    if (ladoA < BC)
}
