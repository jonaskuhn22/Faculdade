#include<stdio.h>
#include<stdlib.h>

int main(){
    int al, a;
    float  not, soma, med;

    soma=0;

    printf("Quantos alunos voce tem em sua sala? ");
    scanf("%d", &al);

    a=1;
    soma=0;
    med=0;

    do{

    printf("Digite a nota do aluno %d -> ", a);
    scanf("%f", &not);

    soma = soma + not;
    a++;
    }while(a<=al);

    med= soma/al;

    printf("\n\nMedia aritmetica -> %.2f ", med);

    if(med>=7,5){
        printf("\n\nTurma com Conceito - A\n\n\n");
    } else{
        if(med<7,5 && med>=5){
            printf("\n\nTurma com Conceito - B\n\n\n");
        } else{
            if(med<5 && med>=2,5){
                printf("\n\nTurma com Conceito - C\n\n\n");
            } else{
                printf("\n\nTurma com Conceito - D\n\n\n");
            }
        }
    }





}
