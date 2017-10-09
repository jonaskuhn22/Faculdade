#include<stdio.h>
#include<stdlib.h>
int main(){
    float mat[3][4];
    float acre;
    int x, y, a;

    a=1;

    for(x=0;x<3;x++){
        for(y=0;y<4;y++){
            printf("Digite o valor do produto %d -> ", a);
            scanf("%f", &mat[x][y]);

            printf("\n");
        a++;
        }
    }

    for(x=0;x<3;x++){
        for(y=0;y<4;y++){

            acre= mat[x][y] + (mat[x][y] * 0.1);

            printf("Valor mat[%d][%d] => %.2f\n", x, y, acre);
        acre=0;
        }
    }
}
