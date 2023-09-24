#include <stdio.h>

int main() {
    double salario, soma_salarios = 0;
    int numero_filhos, soma_filhos = 0, pessoas_com_salario_ate_100 = 0;
    double maior_salario = -1.0;

    while (1) {
        printf("Digite o salário (ou um valor negativo para encerrar): ");
        scanf("%lf", &salario);

        if (salario < 0) {
            break;
        }

        printf("Digite o número de filhos: ");
        scanf("%d", &numero_filhos);

        soma_salarios += salario;
        soma_filhos += numero_filhos;

        if (salario > maior_salario) {
            maior_salario = salario;
        }

        if (salario <= 100) {
            pessoas_com_salario_ate_100++;
        }
    }

    if (pessoas_com_salario_ate_100 > 0) {
        double media_salario = soma_salarios / pessoas_com_salario_ate_100;
        double media_filhos = (double)soma_filhos / pessoas_com_salario_ate_100;

        printf("Média do salário da população: R$%.2lf\n", media_salario);
        printf("Média do número de filhos: %.2lf\n", media_filhos);
    } else {
        printf("Nenhum dado válido foi inserido.\n");
    }

    if (maior_salario >= 0) {
        printf("Maior salário: R$%.2lf\n", maior_salario);
    } else {
        printf("Nenhum salário válido foi inserido.\n");
    }

    double percentual = (double)pessoas_com_salario_ate_100 / (pessoas_com_salario_ate_100 + 1) * 100;
    printf("Percentual de pessoas com salário até R$100,00: %.2lf%%\n", percentual);

    return 0;
}