#include<stdio.h>
#include<stdlib.h>
int main(){
    int a, num, b, c, d;
    a=1;
    b=0;
    c=0;
    d=0;

    do{

        printf(" Digite um numero => ", a);
        scanf("%d", &num);
        if(num>=30 && num<=90){
            b++;
        }else{
            if(num>90){
                c++;
            }else{
                d++;
            }
        }
    a++;
    }while(a<=10);
    printf("O quantidade de numeros entre 30 e 90 -> %d\n\n", b);
    printf("O quantidade de numeros maiores que 90 -> %d\n\n", c);
    printf("O quantidade de numeros menores que 30 -> %d\n\n\n\n", d);
}
