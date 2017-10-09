/*Escreva um programa que leia o nome, a idade
e a cidade de nascimento de uma da pessoa e
apresente posteriormente na tela essas
informações. */


#include<stdio.h>
#include<stdlib.h>
 int main(){
    char nome;
    int idade, cidade;

    printf("Digite o seu nome -> ");
    scanf("%c", &nome);

    printf("Digite sua idade -> ");
    scanf("%d", &idade);

    printf("Digite a cidade de nascimento ->");
    scanf("%s", &cidade);

    printf(" Seu nome %c", nome);

 }
