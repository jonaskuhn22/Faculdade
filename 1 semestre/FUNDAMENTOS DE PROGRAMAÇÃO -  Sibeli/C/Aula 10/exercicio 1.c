#include<stdio.h>
#include<stdlib.h>

main(){
    int num;

    printf("PROCURAR DIA DA SEMANA.\n\n");
    printf("Digite o dia da semana => ");
    scanf("%d", &num);

    if(num == 1){
        printf("\nDomingo\n\n");
    }else if(num == 2){
        printf("\nSegunda-Feira\n\n");
    }else if(num ==3){
        printf("\nTerca-Feira\n\n");
    }else if(num == 4){
        printf("\nQuarta-Feira\n\n");
    }else if(num == 5){
        printf("\nQuinta-Feira\n\n");
    }else if(num == 6){
        printf("\nSexta-Feira\n\n");
    }else if(num == 7){
        printf("\nSabado\n\n");
    }else{
        printf("\n\nNUMERO INVALIDO!!\n\n\n");
    }
}
