#include <stdio.h>

int main() {
    int votos_candidato1 = 0;
    int votos_candidato2 = 0;
    int votos_candidato3 = 0;
    int votos_candidato4 = 0;
    int votos_nulos = 0;
    int votos_em_branco = 0;
    int codigo_voto;

    while (1) {
        printf("Digite o código do voto (0 para encerrar): ");
        scanf("%d", &codigo_voto);
        
        if (codigo_voto == 0) {
            break;  
        }
        
        switch (codigo_voto) {
            case 1:
                votos_candidato1++;
                break;
            case 2:
                votos_candidato2++;
                break;
            case 3:
                votos_candidato3++;
                break;
            case 4:
                votos_candidato4++;
                break;
            case 5:
                votos_nulos++;
                break;
            case 6:
                votos_em_branco++;
                break;
            default:
                printf("Código de voto inválido. Voto não contado.\n");
        }
    }

    printf("Total de votos para o Candidato 1: %d\n", votos_candidato1);
    printf("Total de votos para o Candidato 2: %d\n", votos_candidato2);
    printf("Total de votos para o Candidato 3: %d\n", votos_candidato3);
    printf("Total de votos para o Candidato 4: %d\n", votos_candidato4);
    printf("Total de votos nulos: %d\n", votos_nulos);
    printf("Total de votos em branco: %d\n", votos_em_branco);

    return 0;
}