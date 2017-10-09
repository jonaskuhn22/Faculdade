#include<stdio.h>
#include<stdlib.h>

int main(){
    float nota1, nota2, nota3, me, ma;

    printf("Digite sua primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite sua segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite sua terceira nota: ");
    scanf("%f", &nota3);

    printf("Digite sua media de ercicios: ");
    scanf("%f", &me);

    ma = ((nota1 + nota2)*2 + (nota3 * 3) + me) / 7;

    if (ma >= 9.0){
        printf("\nConceito A\n\n\n");
    } else {
        if (ma < 9.0 && ma >= 7.5){
            printf("\nConceito B\n\n\n");
        } else {
            if (ma < 7.5 && ma >= 6){
                printf("\nConceito C\n\n\n");
            } else {
                if (ma < 6){
                    printf("\nConceito D\n\n\n");
                }
            }
        }
    }
}
