#include<stdio.h>
#include<stdlib.h>
int main(){
    int a, x;

    float peso, alt, soma, med;
    float imc[3];

    a=1;

    for(x=0;x<3;x++){
        printf("Pessoa %d, digite seu peso -> ", a);
        scanf("%f", &peso);

        printf("Digite sua altura -> ");
        scanf("%f", &alt);

        printf("\n");

        imc[x] = peso / (alt * alt);
        a++;
    }

    for(x=0;x<3;x++){
        printf("Valor imc[%d] => %.2f\n", x, imc [x]);
        soma = soma + imc[x];
    }
    med = soma / 3;
    printf("\nMedia dos IMCs => %.2f\n\n\n", med);
}
//IMC = peso / (altura * altura)
