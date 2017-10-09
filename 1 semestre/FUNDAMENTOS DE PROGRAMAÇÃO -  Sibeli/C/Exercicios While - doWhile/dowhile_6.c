#include<stdio.h>
#include<stdlib.h>
int main(){

    int a, m, f;
    float peso, totpm, totpf, medm , medf;
    char sexo;

    printf("__Entrada de dados__\n\n");
    printf("OBS: caso precise separe o peso por '.' ponto.\n\n");

    printf("        TABELA\n   SEXO          LETRA\n  Masculino  --    M\n  Feminino   --    F\n\n");

    a=1;
    m=0;
    f=0;
    medm=0;
    medf=0;

    do{
        printf("\nPessoa %d, digite seu peso -> ", a);
        scanf("%f", &peso);
        printf("Digite a letra do seu sexo -> ");
        scanf("%s", &sexo);

        if(sexo == 'M'){
            m++;
            totpm=totpm+peso;
        } else{
            if(sexo == 'F'){
                f++;
                totpf=totpf+peso;
            }else{
            }
        }
    a++;

    }while(a<=10);

    medm=totpm/m;
    medf=totpf/f;

    printf("\n\nNumero de mulheres => %d\n", f);
    printf("Numero de homens => %d\n\n", m);

    printf("Media dos pesos das mulheres => %.2f\n", medf);
    printf("Media dos pesos dos homens => %.2f\n\n\n\n\n\n", medm);


}
