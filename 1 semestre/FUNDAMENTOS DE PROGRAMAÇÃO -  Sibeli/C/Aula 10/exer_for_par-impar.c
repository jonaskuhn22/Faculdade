#include<stdio.h>
#include<stdlib.h>

int main(){
    int a;

    for(a=1; a<=20; a++){

     if(a%2 == 0){
        printf("\n%d - PAR", a);
     }else{
        printf("\n%d -IMPAR", a);
     }

        //printf("\n%d", a);
    }
}
