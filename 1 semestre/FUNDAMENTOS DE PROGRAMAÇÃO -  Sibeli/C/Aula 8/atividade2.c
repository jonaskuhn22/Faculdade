#include<stdio.h>
#include<stdlib.h>

int main(){
    int A, B; //Tem que criar a variavel C

    printf("Trocando a sequencia dos numeros.\n\n\n");


    printf("Apenas numeros inteiros.");
    printf("\nPressione 'ENTER'... ");

    getchar();

    printf("\n\nEntre com o valor de 'A' => ");
    scanf("%d", &A);

    printf("\nEntre com o valor de 'B' => ");
    scanf("%d", &B);

    printf("\nValor A: %d", A);
    printf("\nValor B: %d", B);

    getchar();
    getchar();

    /*
    C=A
    A=B
    B=C
     */

    A ^= B;
    B ^= A;
    A ^= B;


    printf("\n\nTrocando Valores.");

    getchar();

    printf("\n\nValor A -> %d", A);
    printf("\n\nValor B -> %d\n\n\n", B);
}
