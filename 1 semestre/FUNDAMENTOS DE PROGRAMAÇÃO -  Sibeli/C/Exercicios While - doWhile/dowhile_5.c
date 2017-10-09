#include<stdio.h>
#include<stdlib.h>
int main(){

    int a, b, c, d, e, id;
    float peso, calca, calcb, calcc, meda, medb, medc;

    printf("__Entrada de dados__\n\n");
    printf("OBS: caso precise separe o peso por '.' ponto.\n\n");

    printf("          TABELA\n  1 a 10 anos   --  A");
    printf("\n  11 a 20 anos  --  B");
    printf("\n  21 a 30 anos  --  C\n");

    a=1;

    b=0;
    c=0;
    d=0;
    e=0;

    calca=0;
    calcb=0;
    calcc=0;

    do{
        printf("\nPessoa %d, Digite sua idade =>", a);
        scanf("%d", &id);
        printf("Pessoa %d, Digite seu peso =>", a);
        scanf("%f", &peso);

        if(id>=1 && id<=10){
            calca=peso+calca;
            b++;
        } else{
            if(id>=11 && id<=20){
                calcb=peso+calcb;
                c++;
            }else{
                if(id>=21 && id<=30){
                    calcc=peso+calcc;
                    d++;
                }else{
                    e++;
                }
            }
        }
    a++;
    }while(a<=10);


    meda=calca/b;
    medb=calcb/c;
    medc=calcc/d;

    printf("\n\nMedia dos pesos da faixa etaria A -> %.2f\n\n", meda);
    printf("\n\nMedia dos pesos da faixa etaria B -> %.2f\n\n", medb);
    printf("\n\nMedia dos pesos da faixa etaria C -> %.2f\n\n", medc);

    printf("\n\nNumero de pessoas acima de 30 anos -> %d\n\n\n\n", e);

}
