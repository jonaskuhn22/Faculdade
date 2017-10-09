/*Faça um programa que receba 10 números de matrículas do tipo inteiro e armazeneos
em um vetor. Após preencher o vetor, peça ao usuário para digitar um número de
matrícula qualquer e você deverá verificar se este aluno está matriculado ou não e exibir
uma mensagem na tela.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int vetor [10];
    int a, mat, b;

    b=0;

    for(a=0;a<4;a++){
        printf("Digite o numero da matricula %d -> ", a);
        scanf("%d", &vetor[a]);
    }

    printf("Digite um numero de matricula qualquer -> ");
    scanf("%d", &mat);

    for(a=0;a<4;a++){
        if(mat == vetor [a]){
           b++;
        }else{

        }
    }

    if(b == 1){
        printf("\n\nUsuario ja cadastrado.\n\n\n");
    }else {
        printf("\n\nUsuario nao cadastrado.\n\n");
    }
}
