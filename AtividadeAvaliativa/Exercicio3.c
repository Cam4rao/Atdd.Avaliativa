#include <stdio.h>

int main() {
    float A, B, C;
    
    printf("Digite o valor de A: ");
    scanf("%f", &A);
    printf("Digite o valor de B: ");
    scanf("%f", &B);
    printf("Digite o valor de C: ");
    scanf("%f", &C);
    
    if (A + B > C && A + C > B && B + C > A) {
        if (A == B && B == C) {
            printf("Eh um triangulo equilatero.\n");
        }
        else if (A == B || A == C || B == C) {
            printf("Eh um triangulo isosceles.\n");
        }
        else {
            printf("Eh um triangulo escaleno.\n");
        }
    } else {
        printf("Os valores fornecidos nao podem formar um triangulo.\n");
    }
    
    return 0;
}