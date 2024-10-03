#include <stdio.h>

int main() {
    float notas[4], somaNotas, notaExame, md1, md2;

    for (int i = 0; i < 4; i++) {
        printf("Digite a %d nota: ", i + 1);
        scanf(" %f", &notas[i]);
    }
    
    for (int i = 0; i < 4; i++) {
        somaNotas += notas[i];
    }
    
    md1 = somaNotas / 4;

    if(md1 >= 7) {
        return printf("Aprovado!");
    }

    printf("Infelizmente sua nota nao foi suficiente, digite a nota de recuperacao: ");
    scanf(" %f", &notaExame);

    md2 = (somaNotas + notaExame) / 4;

    if(md2 < 5) {
        return printf("Reprovado!");
    }

    printf("Aprovado em exame!");

    return 0;
}
