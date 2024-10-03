#include <stdio.h>

int main() {
    int a, b, r;

    printf("Digite um numero: ");
    scanf(" %d", &a);

    printf("Digite outro numero: ");
    scanf(" %d", &b);

    if (b > a) {
        r = b - a;
    } else {
        r = a - b;
    }

    printf("A diferenca do valor entre os dois valores e: ", r);

    return 0;
}
