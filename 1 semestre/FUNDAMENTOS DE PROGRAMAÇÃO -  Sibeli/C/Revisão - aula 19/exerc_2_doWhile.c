#include<stdio.h>
#include<stdlib.h>

int main(){
    int a, b, par, somapar, impar, somaimpar, media;

    par=0;
    somapar=0;
    impar=0;
    somaimpar=0;
    a=1;

    do{
        printf("Entre %d, com um numero ->", a);
        scanf("%d", &b);

        if(b%2 == 0){
            par++; // numero de pares.
            somapar=somapar+ b;
        } else{
            impar++;
            somaimpar=somaimpar + b;
            media=somaimpar/impar;
        }
    a++;
    }while(a<=8);

    printf("\n\nQuantidade de numeros PARES => %d", par);
    printf("\nQuantidade de numeros IMPARES => %d", impar);
    printf("\nA soma de todos os numeros pares => %d", somapar);
    printf("\nA media dos numeros impares => %d\n\n\n\n", media);
}
