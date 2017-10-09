/*1 – Faça um programa que receba a idade de 10 pessoas e que calcule e mostre a
quantidade de pessoas com idade maior ou igual a 18 anos.*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int a, b, c;
    a=1;
    c=0;
    while(a<=10){
        printf("Pessoa %d, Digite sua idade => ", a);
        scanf("%d", &b);

        if(b>=18){
            c++;
        } else {
        }
    a++;
    }
    printf("Numero de pessoas maiores de idade - %d\n", c);
}
