#include<stdio.h>
#include<stdlib.h>

int main(){

    int a, idade, tot, pesot, peso;
    float med;
    pesot=0;
    tot=0;
    for(a=1; a<=7; a++){
        printf("Pessoa %d!\n", a);

        printf("Digite seu peso=> ");
        scanf("%d", &peso);

        printf("Dite sua idade =>");
        scanf("%d", &idade);

        if(peso>90){
            pesot= pesot +1;
        }
        tot=tot + idade;
    }
    med=tot / 7;
    printf("Pessoas acima de 90Kg => %d", pesot);
    printf("Media das idades das pessoas => %.2f", med);


}
