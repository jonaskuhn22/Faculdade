#include<stdio.h>
#include<stdlib.h>
int main(){

    int a, b, x;

    printf("Digite um numero: ");
    scanf("%d", &a);

    printf("Digite mais um numero: ");
    scanf("%d", &b);
    do{
       if(a%2==0){
        printf("%d - PAR\n", a);
       } else {

       }
        a++;
    } while(a<=b);

}
