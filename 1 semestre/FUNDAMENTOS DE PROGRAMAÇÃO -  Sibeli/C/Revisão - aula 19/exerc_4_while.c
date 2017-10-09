/*Faça um programa que pergunte ao usuário quantos alunos ele tem na turma dele. Em
seguida, pergunte a nota (1 a 10) de todos esses alunos, um por vez. Seu programa deverá
mostrar a média aritmética da turma e qual o conceito da turma a partir dos seguintes
critérios:
Conceito A: Média igual ou superior a 7,5
Conceito B: Média menor que 7,5 e maior ou igual a 5.
Conceito C: Média menor que 5 e igual ou maior que 2,5.
Conceito D: Média inferior a 2,5*/

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

    while(a<=al){
        printf("Digite a nota do aluno %d -> ", a);
        scanf("%f", &not);

        soma = soma + not;
    a++;
    }

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
