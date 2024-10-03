#include <stdio.h>

int main() {
    float notas[4], somaNotas = 0;

    for (int i = 0; i < 4; i++) {
        printf("Digite a %d nota: ", i + 1);
        scanf(" %f", &notas[i]);
    }
    
    for (int i = 0; i < 4; i++) {
        somaNotas += notas[i];
    }
    
    printf("A media do aluno e: %f ", somaNotas / 4);
}