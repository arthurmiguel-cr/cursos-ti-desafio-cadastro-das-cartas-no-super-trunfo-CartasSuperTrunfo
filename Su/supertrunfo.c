#include <stdio.h>

#include <string.h>

// Estrutura para armazenar os dados da carta
struct Carta {
    char estado[3];
    char codigo[10];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
};

int main() {
    // Cartas pré-definidas
    struct Carta carta1 = {
        "SP", "C1", "São Paulo", 
        12300000, 1521.11, 799000000000.0, 50
    };

    struct Carta carta2 = {
        "RJ", "C2", "Rio de Janeiro", 
        6000000, 1182.30, 411000000000.0, 35
    };

    // Cálculo da Densidade Populacional e PIB per capita
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib / carta1.populacao;

    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    // Atributo escolhido para comparação: População
    printf("Comparação de cartas (Atributo: População):\n\n");

    printf("Carta 1 - %s (%s): %d\n", carta1.nomeCidade, carta1.estado, carta1.populacao);
    printf("Carta 2 - %s (%s): %d\n\n", carta2.nomeCidade, carta2.estado, carta2.populacao);

    // Lógica de comparação com if / if-else
    if (carta1.populacao > carta2.populacao) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
    } else if (carta2.populacao > carta1.populacao) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
