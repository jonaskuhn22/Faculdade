#include<stdio.h>
#include<stdlib.h>

int main(){
    float valorI, taxa, dias, total;

    printf("Calcular - Juro de Pagamento Atrasado.\n\n");

    printf("Use '.' para separar os algarismos.");
    printf("\nPressione 'ENTER'... ");

    getchar();
    //ENTRADA DO VALOR INICIAL
    printf("\n\nEntre com o valor inicial do produto => ");
    scanf("%f", &valorI);
    //ENTRADA DA TAXA
    printf("\nTaxa diaria => ");
    scanf("%f", &taxa);

    getchar();
    //DIAS QUE PASSARAM
    printf("\nTotal de dias que passou => ");
    scanf("%f", &dias);

    getchar();

    //CALCULO
    total = valorI + (valorI * ((taxa / 100) * dias));

    printf("\nValor inicial -> %.2f ", valorI);

    printf("\n\nValor final -> %.2f\n\n\n\n\n", total);

}
