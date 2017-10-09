#include <stdio.h>
#include <stdlib.h>

int main () {

    char t1, t2, t3;

    int pt1, pt2, pt3;

    printf("Digete o nome do time 1: ");
    scanf("%s", &t1);

    printf("Digete o nome do time 2: ");
    scanf("%s", &t2);

    printf("Digete o nome do time 3: ");
    scanf("%s", &t3);

    printf("Digite a pontuação do time 1:");
    scanf("%d", &pt1);

    printf("Digite a pontuação do time 2:");
    scanf("%d", &pt2);

    printf("Digite a pontuação do time 3:");
    scanf("%d", &pt3);

    if(pt1>pt2 && pt1>pt3){

        printf("\nO time 1 é o campeão!\n\n");

    }else if (pt2>pt1 && pt2>pt3){

        printf("\nO time 2 é o campeão!\n\n");


    }else if (pt3>pt1 && pt3>pt2){

        printf("\nO time 3 é o campeão!\n\n");


    }else{

        printf("\nNinguem foi campeão!\n\n");

    }






}
