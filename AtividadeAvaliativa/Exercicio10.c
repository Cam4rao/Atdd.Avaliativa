#include <stdio.h>
#include <string.h>

#define NUM_CIDADES 200
#define ESTADO_RS "RS"

struct Cidade {
    int codigo;
    char estado[3];
    int numVeiculos;
    int numAcidentes;
    float indiceAcidentes;
};

int main() {
    struct Cidade cidades[NUM_CIDADES];
    
    for (int i = 0; i < NUM_CIDADES; i++) {
        cidades[i].codigo = i + 1;
        strcpy(cidades[i].estado, "RS");
        cidades[i].numVeiculos = 1000 + i * 10;
        cidades[i].numAcidentes = 20 + i;
        cidades[i].indiceAcidentes = (float)cidades[i].numAcidentes / cidades[i].numVeiculos;
    }

    int cidadeMaiorIndice = 0;
    int cidadeMenorIndice = 0;
    for (int i = 1; i < NUM_CIDADES; i++) {
        if (cidades[i].indiceAcidentes > cidades[cidadeMaiorIndice].indiceAcidentes) {
            cidadeMaiorIndice = i;
        }
        if (cidades[i].indiceAcidentes < cidades[cidadeMenorIndice].indiceAcidentes) {
            cidadeMenorIndice = i;
        }
    }
    
    printf("a) Maior índice de acidentes: %.2f na cidade %d\n", cidades[cidadeMaiorIndice].indiceAcidentes, cidades[cidadeMaiorIndice].codigo);
    printf("   Menor índice de acidentes: %.2f na cidade %d\n", cidades[cidadeMenorIndice].indiceAcidentes, cidades[cidadeMenorIndice].codigo);
    
    int somaVeiculos = 0;
    for (int i = 0; i < NUM_CIDADES; i++) {
        somaVeiculos += cidades[i].numVeiculos;
    }
    float mediaVeiculos = (float)somaVeiculos / NUM_CIDADES;
    printf("b) Média de veículos: %.2f\n", mediaVeiculos);

    int somaAcidentesRS = 0;
    int numCidadesRS = 0;
    for (int i = 0; i < NUM_CIDADES; i++) {
        if (strcmp(cidades[i].estado, ESTADO_RS) == 0) {
            somaAcidentesRS += cidades[i].numAcidentes;
            numCidadesRS++;
        }
    }
    float mediaAcidentesRS = (float)somaAcidentesRS / numCidadesRS;
    printf("c) Média de acidentes com vítimas no RS: %.2f\n", mediaAcidentesRS);

    return 0;
}