/*Elaborar um programa que leia duas matrizes M(4,6) e N(4,6) e cria uma terceira
matriz que seja a diferença de M com N. Escreva as três matrizes.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int M [4][6] = {{1,2,3,4,5,6},
                    {6,5,4,3,2,1},
                    {1,2,3,4,5,6},
                    {6,5,4,3,2,1}};

    int N [4][6] = {{1,2,3,4,5,6},
                    {1,2,3,4,5,6},
                    {1,2,3,4,5,6},
                    {1,2,3,4,5,6}};

    int S [4][6];
    int a, b;

    for(a=0;a<4;a++){
        for(b=0;b<=6;b++){
            S [a][b] = N[a][b] - M [a][b];
        }
    }
    printf("Matriz M       Matriz N      Matriz S");

    for(a=0;a<4;a++){
        for(b=0;b<=6;b++){
            printf("\n[%d][%d] = %d   [%d][%d] = %d     [%d][%d] = %d", a, b, M [a][b], a,b,N[a][b], a,b,S [a][b]);

        }

    }
}
