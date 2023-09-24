#include <stdio.h>

int main() {
    int numAlunos = 30;
    double notas[numAlunos];
    double media, mediaGeral = 0.0;

    for (int i = 0; i < numAlunos; i++) {
        double n1, n2, n3;
        
        printf("Digite as notas do aluno %d (n1 n2 n3): ", i + 1);
        scanf("%lf %lf %lf", &n1, &n2, &n3);
        
        media = (n1 * 2 + n2 * 4 + n3 * 3) / 10.0;

        printf("Média do aluno %d: %.2lf - ", i + 1, media);
        
        if (media >= 7.0) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }
        
        mediaGeral += media;
    }

    mediaGeral /= numAlunos;
    printf("\nMédia Geral da Turma: %.2lf\n", mediaGeral);

    return 0;
}