#include<stdio.h>
#include<stdlib.h>

int main(){

    int a, sexo, sexo1, sexo2, sex1, sex2, peso, med1, med2, tot1, tot2;

    sexo1=0;
    sexo2=0;
    med1=0;
    med2=0;

    for(a=1; a<=2; a++){
        printf("Pessoa %d, digite seu peso => ", a);
        scanf("%d", &peso);

        getchar();

        printf("Qual seu sexo (M/F) => ");
        scanf("%c", &sexo);

        if(sexo=='M'){
            sexo1= sexo1 + 1;
            med1=med1 + peso;
        } else {
            if(sexo=='F'){
                sexo2=sexo2 + 1;
                med2=med2 + peso;
            }
        }
    }
    printf("Total de masculinos => %d\n", sexo1);
    printf("Total de femininas => %d\n", sexo2);

    //printf("Media do pesos dos masculinos => %.2f\n", tot1);
    //printf("Media do pesos das femininas => %.2f\n", tot2);


}
