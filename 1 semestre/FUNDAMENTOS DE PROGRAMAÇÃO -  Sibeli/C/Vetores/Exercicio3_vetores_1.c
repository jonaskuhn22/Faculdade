#include<stdio.h>
#include<stdlib.h>

int main(){
    int vet1[10], vet2[10], i;

    for(i=0; i<10; i++){
        printf("Digite um numero ->");
        scanf("%d", &vet1[i]);
    }

    for(i=0; i<10; i++){
        vet2[i] = vet1[i];
    }

    for(i=0;i<10;i++){
        if(vet1[i] % 2 ==0){
            vet2[i] = 0;
        }else{
            vet2[i] = vet1[i];
        }
    }

    for(i=0;i<10;i++){
        printf("\nVetor 1 [%d] = %d", i,vet1[i]);
    }

    printf("\n");

    for(i=0;i<10;i++){
        printf("\nVetor 2 [%d] = %d", i,vet2[i]);
    }

}
