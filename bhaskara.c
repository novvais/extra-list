#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, delta;
    float x, x1, x2;

    printf("Digite o valor do coeficiente A: ");
    scanf(" %d", &a);

    if(a == 0) {
        return printf("A equacao nao e de segundo grau");
    }

    printf("Digite o valor do coeficiente B: ");
    scanf(" %d", &b);

    printf("Digite o valor do coeficiente C: ");
    scanf(" %d", &c);

    delta = (pow(b, 2)) - 4 * a * c;

    if(delta <= 0) {
        return printf("Nao tem solucao");
    } else if(delta == 0) {
        x = -b / 2 * a;

        printf("O resultado da equacao e: %f", x);
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);

        x2 = (-b - sqrt(delta)) / (2 * a);

        printf("O resultado da equacao e: x1 = %.2f e x2 = %.2f ", x1, x2);
    }

    return 0;
}