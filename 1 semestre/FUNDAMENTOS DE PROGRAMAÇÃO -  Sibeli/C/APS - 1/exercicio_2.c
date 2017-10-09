#include<stdio.h>
#include<stdlib.h>
int main(){

    int a, num, calc;

    printf("     Vamos realizar um loop que devera parar em 1 !!");

    printf("\n\n  Se o numero digitado for PAR o programa realizara esse calculo - Calc = num /2.");
    printf("\n  Se o numero digitado for IMPAR o programa realizara esse calculo - Calc =( 3*num) + 1.");
    printf("\n  A cada resultado o numero ira passar novamente em um dos calculos ate chegar no numero '1'.\n\n\n");

    printf("   Digite um numero inteiro (nao pode ser 1) => ");
    scanf("%d", &num);


    printf("\n\n  O numero digitado foi -> %d\n\n\n", num);
    printf("  Loop -> ");

   do{
    if(num%2 == 0){
        calc=num/2;
    } else {
        calc=(num * 3) +1;
    }
    printf("%d - ", calc);
    num=calc;
    a=calc;

   }while(a>=4);
   printf("1\n\n\n");

   printf("                                        Produzido por : Jon@s Kuhn & Matheus Bressi@ni...\n\n");

}
