#include <stdio.h>
#include <math.h>

double calcularFuncao(double x) {
    return (5*x+3)/(sqrt(x*x-16));
}

int main() {
    double x;
    printf("Digite o valor de x: ");
    scanf("%lf", &x);

    double resultado = calcularFuncao(x);

    printf("f(x) = %.2lf\n", resultado);

    return 0;
}