#include<stdio.h>
#include<stdlib.h>

int main(){
    int a, b, c, x, y;

    printf("Digite o primeiro numero inteiro -> ");
    scanf("%d", &a);

    printf("Digite o segundo numero inteiro -> ");
    scanf("%d", &b);

    printf("Digite o terceiro numero inteiro -> ");
    scanf("%d", &c);

    float numeros[2] = {a, b, c};

    y=1;

    for(x=0; x<=2; x++){
        printf("Numero %d => %d", y, numeros[x]);
        y++;
    }


}
