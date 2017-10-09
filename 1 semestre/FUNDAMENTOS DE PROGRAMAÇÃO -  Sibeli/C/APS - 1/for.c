#include<stdio.h>
#include<stdlib.h>
int main(){

    int a, num, calc;

    printf("Vamos realizar um loop que devera parar em 1 !!\n\n\n");
    printf("Digite um numero inteiro (nao pode ser 1) =>");
    scanf("%d", &num);

    for(a=num; a>=4; ){
        if(num%2 == 0){
            calc=num/2;

        }else{
            calc=num * 3 + 1;
        }
        num=calc;
        printf("%d - ", num);
        a=num;
    }
    printf(" 1 ");
}
