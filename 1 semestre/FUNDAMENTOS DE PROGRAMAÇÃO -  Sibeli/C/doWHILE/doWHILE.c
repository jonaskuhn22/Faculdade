#include<stdio.h>
#include<stdlib.h>
int main(){
    int x, num;
    x =0;
    printf("Digite um numero: ");
    scanf("%d", &num);

    do{
        printf("%d\n", x);
        x++;
    }while(x<=num);
}
