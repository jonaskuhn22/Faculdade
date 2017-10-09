#include<stdio.h>
#include<stdlib.h>
int main(){
    int x, id, maior;
    float peso, medId, soma;

    x=1;
    medId=0;
    maior=0;
    soma=0;

    printf("Separe o peso por '.' ponto..\n\n");

    do{
        printf("Pessoa %d, digite sua idade -> ", x);
        scanf("%d", &id);

        soma=soma+id;

        printf("Digite seu peso -> ");
        scanf("%f", &peso);

        printf("\n");

        if(peso>90){
            maior++;
        }else{

        }
    x++;
    }while(x<=7);

    medId=soma/7;

    printf("\nQuantidade de pessoas com mais de 90 quilos => %d\n", maior);

    printf("Media dos pesos => %.2f\n\n", medId);

}
