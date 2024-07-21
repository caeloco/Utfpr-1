#include <stdio.h>



int main () {
    int a, b, c, d;

    scanf("%i %i %i %i", &a, &b, &c, &d);

    printf("%i %i %i %i", a, b, c, d);

    printf("\ndivisao do A pelo C: %i", a / c);

    printf("\ndivisao do B pelo D: %i", b * d);

    return 0;
}