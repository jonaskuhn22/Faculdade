#include<stdio.h>
#include<stdlib.h>
int main(){

    int a, b;

    printf("Digite um numero: ");
    scanf("%d", &a);

    printf("Digite mais um numero: ");
    scanf("%d", &b);

    while(a<=b){
    if(a%2==0){
        printf("%d - PAR\n", a);
    } else {

    }
    a++;
    }
}
