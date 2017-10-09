#include<stdio.h>
#include<stdlib.h>
int main(){

    float peso, altura, IMC;

    printf("Calculando o IMC.\nSepare os digitos por '.' (ponto)");
    printf("\n\nDigite o seu peso => ");
    scanf("%f", &peso);

    printf("\nDigite a sua altura => ");
    scanf("%f", &altura);

    IMC=peso/(altura*altura);

    printf("\nSeu Indice de Massa Corporal => %.2f\n\n", IMC);
}
