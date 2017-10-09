#include<stdio.h>
#include<stdlib.h>
int main(){

    int x, num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    x=0;
    while(x<=num){
        printf("Num: %d \n", x);
        x++;
    }
}
