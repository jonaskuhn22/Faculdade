#include<stdio.h>
#include<stdlib.h>

int main(){
    int x, y, a, b, calc, mat [3][3];

    calc = 0;

    for(x=0;x<3;x++){
        for(y=0;y<3;y++){
            printf("Digite um numero para a MAT [%d][%d]=",x,y);
            scanf("%d", &mat[x][y]);
        }
    }

    for(x=0;x<3;x++){
        for(y=0;y<3;y++){
            calc = mat [x][y] * 5;
            printf("\nNumero da matriz * 5 => %d", calc);
        }
    }
}
