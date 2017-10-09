#include<stdio.h>
#include<stdlib.h>

int main(){

    int a, b, total;
    total=0;
    for(a=1; a<=10; a++){
        printf("Idade da pessoa %d =>", a);
        scanf("%d", &b);

        if(b>=18){
            total= total+1;
        }
    }
    printf("Sao %d pessoas maiores de idade.", total);



}
