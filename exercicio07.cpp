#include <stdio.h>



int main () {
    int a, b;
    int c = 0;

    scanf("%i %i", &a, &b);

    printf("antes da troca: \n a = %i b = %i", a, b);

    c = a;
    a = b;
    b = c;

    printf("\ndepois da troca: \n a = %i b = %i", a, b);

    return 0;
}