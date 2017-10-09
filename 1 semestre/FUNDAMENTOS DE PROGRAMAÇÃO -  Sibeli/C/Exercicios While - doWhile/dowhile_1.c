#include<stdio.h>
#include<stdlib.h>
int main(){

    int a, b, c;
    a=1;
    c=0;
    do{
        printf("Pessoa %d, Digite sua idade => ", a);
        scanf("%d", &b);

        if(b>=18){
            c++;
        } else {
        }
    a++;
    }while(a<=10);

    printf("Numero de pessoas maiores de idade - %d\n", c);
}
