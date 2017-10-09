#include<stdio.h>
#include<stdlib.h>
int main(){

    char a;
    char b;
    char c;
    int pa, pb, pc;

    printf("Digite o nome do time =>");
    scanf("%s", &a);
    printf("Digite o numero de seus pontos =>");
    scanf("%d", &pa);

    printf("\nDigite o nome do time =>");
    scanf("%s", &b);
    printf("Digite o numero de seus pontos =>");
    scanf("%d", &pb);

    printf("\nDigite o nome do time =>");
    scanf("%s", &c);
    printf("Digite o numero de seus pontos =>");
    scanf("%d", &pc);

    if (pa>pb && pa>pc){
        printf("%s", &a);
    }




}
