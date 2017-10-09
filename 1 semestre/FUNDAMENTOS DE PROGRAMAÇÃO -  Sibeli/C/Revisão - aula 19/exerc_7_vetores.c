    /*  Após mostre a média
contida no terceiro vetor e apresente se o aluno está ‘APROVADO’ ou ‘REPROVADO’,
tendo 7 como média para aprovação.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int vetor1 [8], vetor2 [8];
    float vetor3[8];
    int a, al;


    al=1;

    for(a=0;a<8;a++){
        printf("Digite a nota AV1 do aluno %d -> ", al);
        scanf("%d", &vetor1 [a]);
        al++;
    }
    al=1;
    printf("\n\n");

    for(a=0;a<8;a++){
        printf("Digite a nota AV2 do aluno %d -> ", al);
        scanf("%d", &vetor2 [a]);
        al++;
    }

    for(a=0;a<8;a++){
        vetor3 [a] = (vetor1 [a] + vetor2 [a]) /2;
    }

    for(a=0;a<8;a++){
        if(vetor3 [a] >= 7){
            printf("\nAluno Aprovado - %.2f\n", vetor3 [a]);
        }else{
            printf("\nAluno Reprovado - %.2f\n", vetor3 [a]);
        }
    }

}
