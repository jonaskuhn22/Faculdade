#include<stdio.h>
#include<stdlib.h>

int main(){
    int x, a;
    float notas[5]={7, 8, 9.5, 9.9, 5.2};

    a=1;

    printf("Exibindo valores do ARRAY\n\n");

    for(x=0; x<=4; x++){
        printf("Nota %d => %.2f\n", a, notas[x]);
        a++;
    }
}
