#include<stdio.h>
#include<stdlib.h>

int main(){
    int vet[20], x, maior, menor, igual;

    maior=0;
    menor=0;
    igual=0;


    for(x=0; x<20; x++){
        printf("Digite um numero ->");
        scanf("%d", &vet[x]);
    }

    for(x=0; x<20; x++){
        if(vet[x]>vet[0]){
            maior=maior+1;
        }else if(vet[x] < vet[0]){
            menor=menor+1;
        }else{
            igual=igual+1;
        }
    }

    printf("\n\nMaior: %d\nMenor: %d\nIgual: %d",maior,menor,igual);
}
