/*Fa�a um programa que pergunte ao usu�rio quantos alunos ele tem na turma dele. Em
seguida, pergunte a nota (1 a 10) de todos esses alunos, um por vez. Seu programa dever�
mostrar a m�dia aritm�tica da turma e qual o conceito da turma a partir dos seguintes
crit�rios:
Conceito A: M�dia igual ou superior a 7,5
Conceito B: M�dia menor que 7,5 e maior ou igual a 5.
Conceito C: M�dia menor que 5 e igual ou maior que 2,5.
Conceito D: M�dia inferior a 2,5*/

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
