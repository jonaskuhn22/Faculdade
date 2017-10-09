#include<stdio.h>
#include<stdlib.h>

int main(){

    int a, b, ac;

    ac=1;

    printf("Numero para o fatorial => ");
    scanf("%d", &b);

    printf("\nFatorial de %d.\n\n", b);
    printf("%d!= ", b);

     for(a=1; a<=b; a++){
        ac*=a;
    }

    for( ; b>1; b--){
        printf("%d*", b);
    }
    if(b=1){
        printf("%d=",b);
        }

    printf(" %d\n\n", ac);


}
