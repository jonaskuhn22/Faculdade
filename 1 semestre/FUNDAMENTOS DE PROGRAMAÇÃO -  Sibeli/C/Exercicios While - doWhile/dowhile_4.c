/*4 – Faça um programa que receba a idade e peso de sete pessoas. Calcule e mostre:
• a quantidade de pessoas com mais de 90 quilos;
• a média da idade destas sete pessoas;*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int a, id, quantp, totId;
    float peso, med;
    quantp=0;
    a=1;
    totId=0;


    printf("__Entrada de dados__\n\n");
    printf("OBS: caso precise separe o peso por '.' ponto.\n");

    do{
       printf("\nPessoa %d, Digite sua idade =>", a);
        scanf("%d", &id);
        printf("Pessoa %d, Digite seu peso =>", a);
        scanf("%f", &peso);

        if(peso>=90){
            quantp++;
        }else{
        }

        if(id>=0){
            totId=id+totId;
        }else{
        }

    a++;
    }while(a<=7);

    med=totId/7;

    printf("\n\nQuantidade de pessoas com mais de 90 quilos -> %d\n\n", quantp);

    printf("Media da idade destas sete pessoas -> %.2f\n\n\n\n", med);

}
