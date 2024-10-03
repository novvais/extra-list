#include <stdio.h>

int main() {
    int n;

    printf("Digite um numero: ");
    scanf(" %d", &n);

    if(n < 0) {
        n = n * (-1);
    }

    printf("O valor digite positivo e: ", n);

    return 0;
}