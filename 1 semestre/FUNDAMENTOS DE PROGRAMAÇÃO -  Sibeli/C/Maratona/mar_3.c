//3 � Receba um n�mero qualquer e informe se este n�mero � par ou �mpar.

#include<stdio.h>
#include<stdlib.h>

int main(){

    int a;

    printf("___O numero e PAR ou IMPAR???___\n");

    printf("\n\nEntre com um numero => ");
    scanf("%d", &a);

    if(a%2 == 0){
        printf("\nO numero %d = PAR!!\n\n", a);
    }else{
        printf("\nO numero %d = IMPAR!!\n\n", a);
    }
}
