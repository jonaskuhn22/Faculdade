#include<stdio.h>
#include<stdlib.h>

int main(){

    int a, b, val;
    val=0;
    for(a=1; a<=10; a++){
        printf("Entre com o %d numero => ", a);
        scanf("%d", &b);

        if(b>=30 && b<=90){
            val=val +1;
        }
    }
    printf("Total de numeros entre 30 e 90 => %d", val);
}
