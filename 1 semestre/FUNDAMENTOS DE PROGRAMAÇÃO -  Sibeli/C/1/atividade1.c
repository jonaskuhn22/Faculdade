#include<stdio.h>
#include<stdlib.h>

int main(){
    char nome;
    char idade;
    char city;
    char altura;
    char escola;

    printf("Dados pessoais.\n");
    getchar();

    printf("Digite seu nome => ");
    scanf("%s", &nome);

    printf("\Ola!! %s", &nome);

    printf("\n Digite sua idade => ");
    scanf("%s", &idade);

    printf("Sua idade: %s ", &idade);

    printf("\n Digite o local onde voce estuda => ");
    scanf("%s", &escola);

    printf("Voce estuda na: %s", &escola);

    printf("\n Digite sua altura => ");

    scanf("%s", &altura);

    printf("Voce tem: %s", &altura);

    printf("\n Cidade de nascimento => ");
    scanf("%s", &city);

    getchar();

    printf("Voce nasceu em: %s", &city);

    getchar();

}
