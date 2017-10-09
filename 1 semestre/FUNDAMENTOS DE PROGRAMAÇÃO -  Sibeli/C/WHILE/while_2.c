#include<stdio.h>
#include<stdlib.h>
int main(){

    int x;
    x=1;

    while(x<=20){

        if(x%2 == 0){
            printf("%d - PAR \n", x);
        }else{
            printf("%d - IMPAR \n", x);
        }

        x++;
    }


}
