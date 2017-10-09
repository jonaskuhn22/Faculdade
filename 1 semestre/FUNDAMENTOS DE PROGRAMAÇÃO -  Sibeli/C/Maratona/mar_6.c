#include<stdio.h>
#include<stdlib.h>

int main(){

    float s, calc, z, cal, al;
    char p;

    printf("Digite seu salario mensal: ");
    scanf("%f", &s);

    printf("TABELA DE PLANOS\nA=10\nB=15\nC=20 ");
    printf("\nQual seu plano: ");
    scanf("%s", &p);

    if(p=='A', 'a'){
        cal= s / 100*10;
        al=s+cal;
        printf("\nNovo salario: %.2f R$\n\n", al);

    }else if(p=='B', 'b'){
        cal= s / 100*15;
        al=s+cal;
        printf("\nNovo salario: %.2f R$\n\n", al);

    }else if(p=='C', 'c'){
        cal= s / 100*20;
        al=s+cal;
        printf("\nNovo salario: %.2f R$\n\n", al);

    }else{
        printf("\nComando invalido!!\n\n");
    }
}
