#include<stdio.h>
#include<stdlib.h>

int main(){

    int a, id, p, p1, p2;
    float peso, totp, totp1, totp2, medp, medp1, medp2;

    totp=totp1=totp2=0;
    p=p1=p2=0;

    for(a=1; a<=10; a++){

        printf("Pessoa %d, digite sua idade =>", a);
        scanf("%d", &id);

        printf("Digite seu peso =>"),
        scanf("%f", &peso);

        if(id>=1 && id<=10){
            p=p+1;
            totp=totp + peso;
        }else{
            if(id>=11 && id<=20){
                p1=p1+1;
                totp1=totp1 + peso;
            }else{
                if(id>=21 && id<=30){
                    p2=p2+1;
                    totp2=totp2 + peso;
                }
            }
        }

    }
    medp=totp / p;
    printf("%.2f", medp);

    medp1=totp1 / p1;
    printf("%.2f", medp1);

    medp2=totp1 / p2;
    printf("%.2f", medp2);
}
