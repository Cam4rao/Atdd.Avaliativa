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
            printf("Triangulo Equilatero\n");
        } else if (A == B || A == C || B == C) {
            printf("Triangulo Isosceles\n");
        } else {
            printf("Triangulo Escaleno\n");
        }
        
        if (A * A + B * B == C * C || A * A + C * C == B * B || B * B + C * C == A * A) {
            printf("Triangulo Retangulo\n");
        } else if (A * A + B * B < C * C || A * A + C * C < B * B || B * B + C * C < A * A) {
            printf("Triangulo Obtusangulo\n");
        } else {
            printf("Triangulo Acutangulo\n");
        }
    } else {
        printf("Os valores fornecidos nao formam um triangulo.\n");
    }
    
    return 0;
}