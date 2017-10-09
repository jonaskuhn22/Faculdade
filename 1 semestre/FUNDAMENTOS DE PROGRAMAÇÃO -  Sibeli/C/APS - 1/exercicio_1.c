#include<stdio.h>
#include<stdlib.h>
int main(){

    char letra;
    float valorinf, calcm, calcs, calch;

    printf("          Vamos fazer a conversao do seu tempo!!\n\n");
    printf("                     Pressione ENTER\n\n");

    getchar();

    printf("Digite o valor do seu tempo (Ex: 1.30)=> ");
    scanf("%f", &valorinf);

    printf("\n            TABELA\n\n");
    printf("   TEMPO");
    printf("      ---    LETRA\n\n");
    printf("   Horas      ---     H \n   Minutos    ---     M\n   Segundos   ---     S\n\n");

    printf("Digite a LETRA correspondente ao seu tempo digitado=> ");
    scanf("%s", &letra);

    if(letra == 'H'){
        calcm= valorinf*60;
        calcs= valorinf*3600;

        printf("\n   ->Valor em minutos - %.2f min\n\n", calcm);
        printf("   ->Valor em segundos - %.2f seg\n\n\n", calcs);
        printf("                                        Produzido por : Jon@s Kuhn & Matheus Bressi@ni...\n\n");
    }else{
        if(letra == 'M'){
            calcs= valorinf*60;
            calch= valorinf/60;

            printf("\n   ->Valor em segundos - %.2f seg\n\n", calcs);
            printf("   ->Valor em horas - %.4f hrs\n\n\n", calch);
            printf("                                        Produzido por : Jon@s Kuhn & Matheus Bressi@ni...\n\n");
        }else{
            if(letra == 'S'){
                calcm= valorinf/60;
                calch= valorinf/3600;

                printf("\n   ->Valor em minutos - %.3f min\n\n", calcm);
                printf("   ->Valor em horas - %.6f hrs\n\n\n", calch);
                printf("                                        Produzido por : Jon@s Kuhn & Matheus Bressi@ni...\n\n");
            } else {
                printf("\n\n\n                          Valor invalido....\n\n");

                printf("Verifique se voce separou o tempo por '.' ponto.\n");
                printf("Verifique se voce digitou a letra de acordo com a tabela.\n\n\n");

                printf("___________________________________ERROR____________________________________\n\n");
            }
        }
    }
}
