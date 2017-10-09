#include<stdio.h>
#include<stdlib.h>

#define PI 3.14159
int main(){
    float altura, raio, volume;

    printf("Calculando o volume da lata.\n");

    printf("Valor da altura:");
    scanf("%f", &altura);

    printf("Valor do raio:");
    scanf("%f", &raio);

    //volume = pi * raio * altura

    volume = (PI * (raio * raio)) * altura;

    printf("Volume: %f", volume);


}
