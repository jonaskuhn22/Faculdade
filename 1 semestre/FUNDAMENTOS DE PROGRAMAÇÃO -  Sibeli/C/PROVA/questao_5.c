#include<stdio.h>
#include<stdlib.h>
int main(){

    int a, b, tot;

    tot = 0;
    for(a=1; a<=10; a++){
        printf("Pessoa %d, digite sua idade =>", a);
        scanf("%d", &b);

        if(b>=18){
            tot = tot + 1;
        } else {
        }
    }
    printf("\nNumero de pessoas que sao de maior idade = %d\n\n", tot);
}
