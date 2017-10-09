/*4 - Faça um programa que mostre a tabuada dos números de 1 a 10.*/

#include<stdio.h>
#include<stdlib.h>
int main(){
    int tab, num;
    for(tab=1; tab<=10; tab++){
        printf("\n\nTABUADA DO %d\n", tab);
        for(num=1; num<=10; num++){
            printf("\n %d*%d=%d",num, tab, num*tab);
        }
    }
}
