#include<stdio.h>
#include<stdlib.h>

int main(){
    int a, aprov, repro;

    float b;

    a=1;
    aprov=0;
    repro=0;

    do{
        printf("Aluno %d, entre com sua media final -> ", a);
        scanf("%f", &b);

        if(b>=7){
            aprov=aprov+1;
        }else {
            repro=repro+1;
        }

    a++;
    }while(a<=10);

    printf("\n\nAlunos APROVADOS => %d\n\n",aprov);
    printf("Alunos REPROVADOS => %d \n\n\n\n",repro);

}
