#include<stdio.h>
#include<stdlib.h>

int main(){
    int matriz[3][4] = {{1,2,3,4},
                        {5,6,7,8},
                        {9,0,1,2}}, x, y, num[3][4];

    //printf("%d", matriz[1][2]);

    for(x=0; x<3;x++){
        for(y=0;y<4;y++){
            printf("Digite m[%d][%d]=",x,y);
            scanf("%d", &num[x][y]);
        }
    }

    for(x=0;x<3;x++){
        for(y=0;y<4;y++){
            printf("\nNum [%d][%d] = %d", x, y,num[x][y]);
        }
    }
}
