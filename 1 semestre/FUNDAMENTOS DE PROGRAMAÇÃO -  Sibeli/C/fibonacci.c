//1,1,2,3,5,8,13,21,34,55,89

#include<stdio.h>
#include<stdlib.h>

int main(){

    int a, b;

    b=0;

    printf("Sequencia de FIBONACCI!!\n\n");

    for(a=b ; ; a++){
        b = b + a;
        printf("%d\n", b);
        b=a;
    }

}
