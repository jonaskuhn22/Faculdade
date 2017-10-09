#include<stdio.h>
#include<stdlib.h>
int main(){
    int vet[10];
    int x, maior, igual, menor;

    maior=0;
    menor=0;
    igual=0;

    for(x=0;x<10;x++){
        printf("Digite um valor para vet[%d] -> ", x);
        scanf("%d", &vet[x]);

        if(vet[x]>5){
            maior++;
        }else if(vet[x]==5){
            igual++;
        }else if(vet[x]<5){
            menor++;
        }else{
        }
    }

    printf("\nQuantidade de numeros maiores que 5 => %d\n", maior);
    printf("Quantidade de numeros iguais a 5 => %d\n", igual);
    printf("Quantidade de numeros menores que 5 => %d\n", menor);

}
