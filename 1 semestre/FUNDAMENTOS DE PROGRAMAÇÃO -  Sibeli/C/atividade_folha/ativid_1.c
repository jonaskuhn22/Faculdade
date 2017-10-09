#include<stdio.h>
#include<stdlib.h>

int main(){
    int id;
        printf("Digite sua idade =>");
        scanf("%d", &id);

        if (id >= 5 && id <= 7){
            printf("\nInfantil A");
        } else {
            if (id >= 8 && id <= 10){
                printf("\nInfantil B");
            } else {
                if (id >= 11 && id <= 13){
                    printf("\nJuvenil A");
                } else {
                    if (id >= 14 && id <= 17){
                        printf("\nJuvenil B");
                    } else {
                        if (id >= 18){
                            printf("\nSenior");
                        }
                    }
                }
            }
        }
    getchar();
    getchar();
}
