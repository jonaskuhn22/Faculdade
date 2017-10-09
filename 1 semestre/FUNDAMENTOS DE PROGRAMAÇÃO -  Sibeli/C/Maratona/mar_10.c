#include<stdio.h>
#include<stdlib.h>

int main(){

    int x;
    float a, total, media;

    printf("Media das Alturas...\n\n");

    for(x=1; x<=5; x++){
        printf("Entre com a altura da pessoa %d: ",x);
        scanf("%f", &a);
        total= total + a;
    }
    media= total / 5;

    printf("\nA media da alturas: %.2f\n\n", media);
}
