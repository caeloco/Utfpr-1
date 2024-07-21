#include <stdio.h>



int main () {
    float salario, aux = 0;
    float aumento;

    printf("digite seu salario: ");
    scanf("%f", &salario);

    printf("digite o aumento que recebera: ");
    scanf("%f", &aumento);

    aux = salario / 100;

    aux *= aumento;

    printf("seu salario antes do aumento: %.2f", salario);

    printf("\no aumento foi %f igual a: %.2f", aumento, aux);

    printf("\nseu salario apos do aumento: %.2f", salario + aux);

    return 0;
}