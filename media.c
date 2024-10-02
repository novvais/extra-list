#include <stdio.h>

int main() {
    int notas[4], somaNotas = 0;

    for (int i = 0; i < 4; i++) {
        printf("Digite o primeiro numero: ");
        scanf(" %d", &notas[i]);
    }
    
    for (int i = 0; i < 4; i++) {
        somaNotas += notas[i];
    }
    
    printf("A media do aluno e: %d ", somaNotas / 4);
}