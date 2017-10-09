/*4 - Escreva um programa que pergunte o raio de uma circunferência, e sem seguida
mostre o diâmetro, comprimento e área da circunferência. (Obs.: Defina PI como sendo
uma constante no programa valendo 3,14).
• Cálculo do Diâmetro: 2 * raio;
• Cálculo do comprimento = 2 * PI * raio;
• Cálculo da área = PI * raio * raio;*/

#include<stdio.h>
#include<stdlib.h>
#define PI 3.1415

int main(){

    float r, di, comp, ar;


    printf("Calculando o diametro, comprimento e area de uma CIRCUNFERENCIA!!\n\n");

    printf("Digite o raio da circunferencia =>");
    scanf("%f", &r);

    di = 2 * r;
    comp = 2 * r *r;
    ar = PI * r * r;

    printf("O diametro da circunferencia= %.2f ", di);

    printf("\nO comprimento da circunferencia= %.2f ", comp);

    printf("\nA area da circunferencia= %.2f \n\n", ar);
}
