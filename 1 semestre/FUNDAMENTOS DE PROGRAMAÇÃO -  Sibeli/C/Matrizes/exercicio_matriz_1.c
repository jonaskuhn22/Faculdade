#include<stdio.h>
#include<stdlib.h>

int main(){
    int mat[2][3], a, b, calc;

    calc=0;

    printf("Entre com os valores para a Matriz MAT...\n\n");

    for(a=0;a<2;a++){
        for(b=0;b<3;b++){
            printf("Digite um numero para a MAT [%d][%d]=",a,b);
            scanf("%d", &mat[a][b]);
        }
    }

    for(a=0;a<2;a++){
        for(b=0;b<3;b++){
            calc = calc + mat [a][b];
        }
    }

    printf("\n\nSoma dos numeros da matriz MAT => %d", calc);

}
