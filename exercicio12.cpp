#include <stdio.h>



int main () {
    int km = 1350, tanque = 45, consumo = 14, aux = 0;
    float posto1 = 5.49, posto2 = 5.90, posto3 = 5.93;
    float total = 0;

    total += tanque * posto1;
    km -= tanque * consumo;

    total += tanque * posto2;
    km -= tanque * consumo;

    aux = km / consumo;
    aux / consumo;
    total += (aux + 1) * posto3;

    printf("o total gasto na viagem foi de: %.2f", total);

    return 0;
}