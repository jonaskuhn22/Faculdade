/*4 - Faça um programa que mostre a tabuada dos números de 1 a 10.*/
#include <stdio.h>
#include <stdlib.h>

int main () {

    int tab, num, num2;

    for(tab=1; tab<=10; tab++){

        printf("\n\n\nTABUADA DO %d", tab);

    for(num=1; num<=10; num++){

        num2=tab*num;

        printf("\n%dX%d=%d", tab, num, num2);

        }
    }
}
