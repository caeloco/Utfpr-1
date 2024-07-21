#include <stdio.h>



int main () {
    int cavalos;
    float ferraduras, valorcavalos;

    printf("digite quantos e o preco dos cavalos que vai comprar: ");
    scanf("%i %f", &cavalos, &valorcavalos);

    printf("\ndigite o preco das ferraduras que vai comprar: ");
    scanf("%f", &ferraduras);

    printf("\no valor gasto em cavalos sera de: %.2f", cavalos * valorcavalos);

    printf("\no valor gasto em ferraduras sera de: %.2f", ferraduras * 4 * cavalos);

    return 0;
}