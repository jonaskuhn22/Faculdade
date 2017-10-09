#include<stdio.h>
#include<stdlib.h>

int main(){
    int x, soma, num;

for(x=1; x<=10; x++){
    printf("Digite o numero: ");
    scanf("%d",&num);
    soma=soma + num;
}
printf("Valor da soma: %d", soma);
}
