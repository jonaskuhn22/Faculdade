#include<stdio.h>
#include<stdlib.h>

int main(){
    float valorh, hras, inss, salarioB, salarioL, desconto, salario;

    printf("Valor por hora: ");
    scanf("%f", &valorh);

    printf("\nQuantas horas trabalhou no mes:");
    scanf("%f", &hras);

    printf("\nPercentual de desconto do INSS: ");
    scanf("%f", &inss);

    salarioB = valorh * hras;
    desconto = (salarioB * inss) / 100;
    salarioL = desconto;
    salario = salarioB - salarioL;

    printf("\nSalario bruto: %.2f\n", salarioB);
    printf("\nValor do desconto (inss): %.2f\n", desconto);
    printf("\nSalario liquido: %.2f\n\n\n", salario);
}

