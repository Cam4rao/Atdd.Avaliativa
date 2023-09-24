#include <stdio.h>

int main() {
    float chico = 1.50;
    float ze = 1.10;
    int anos = 0;

    while (ze <= chico) {
        chico += 0.02;
        ze += 0.03;
        anos++;
    }

    printf("Serao necessarios %d anos para que Zeh seja maior que Chico.\n", anos);

    return 0;
}