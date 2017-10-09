//NÃO ESTÁ CERTA, PORÉM QUERO SABER COMO SE FAZ...

#include<stdio.h>
#include<stdlib.h>
int main(){
    int mat[10];
    int x, y, v, a;

    a=010101;

    printf("Digite o numero para matricula [0] -> ");
    scanf("%d", &mat[0]);

    for(y=1; y<10; y++){
        v=0;
        printf("Digite o numero para matricula [%d] -> ", y);
        scanf("%d", &v);

        for(x=0; x<1; x++){
            if(v == mat[0]){
                printf("Digite outro numero.\n\n");
                mat[0] = a;
            }else if(v == mat[1]){
                printf("Digite outro numero.\n\n");
                mat[1] = a;

            }else if(v == mat[2]){
                printf("Digite outro numero.\n\n");
                mat[2] = a;

            }else if(v == mat[3]){
                printf("Digite outro numero.\n\n");
                mat[3] = a;

            }else if(v == mat[4]){
                printf("Digite outro numero.\n\n");
                mat[4] = a;

            }else if(v == mat[5]){
                printf("Digite outro numero.\n\n");
                mat[5] = a;

            }else if(v == mat[6]){
                printf("Digite outro numero.\n\n");
                mat[6] = a;

            }else if(v == mat[7]){
                printf("Digite outro numero.\n\n");
                mat[7] = a;

            }else if(v == mat[8]){
                printf("Digite outro numero.\n\n");
                mat[8] = a;

            }else if(v == mat[9]){
                printf("Digite outro numero.\n\n");
                mat[9] = a;

            } else{
                mat[y] = v;
            }
        }
    }

    for(x=0;x<10;x++){
        printf("\nMatricula [%d] = %d", x, mat[x]);
    }
}
