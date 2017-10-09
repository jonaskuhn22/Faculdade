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

    if(IMC<20){
        printf("\nSeu Indice de Massa Corporal => %.2f", IMC);
        printf("\nSua situacao segundo a OMS => Abaixo do peso!\n\n");
    } else {
        if(IMC>=20 && IMC<25){
            printf("\nSeu Indice de Massa Corporal => %.2f", IMC);
            printf("\nSua situacao segundo a OMS => Peso normal!\n\n");
        } else {
            if(IMC>=25 && IMC>30){
                printf("\nSeu Indice de Massa Corporal => %.2f", IMC);
                printf("\nSua situacao segundo a OMS => Acima do peso!\n\n");
            } else {
                if(IMC>=30 && IMC<34){
                    printf("\nSeu Indice de Massa Corporal => %.2f", IMC);
                    printf("\nSua situacao segundo a OMS => Obeso!\n\n");
                } else {
                    if(IMC>=34){
                        printf("\nSeu Indice de Massa Corporal => %.2f", IMC);
                        printf("\nSua situacao segundo a OMS => Muito Obeso!\n\n");
                    } else {
                        printf("\nSeu Indice de Massa Corporal => %.2f", IMC);
                        printf("\nSua situacao segundo a OMS => Muito Obeso!\n\n");
                    }
                }
            }
        }
    }
}

