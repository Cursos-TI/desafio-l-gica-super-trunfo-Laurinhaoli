#include <stdio.h>

// Super Trunfo - Cidades
// Tema 2 - Comparação de Cartas

int main() {
    // Definição das variáveis
    char guaruja[49], santos[50];
    int 15000, 30000;
    float 1532.00, 1539.00;
    float 125.005, 245.125;

    // Cadastro da primeira cidade
    printf("guaruja: \n");
    scanf("%s", guaruja);
    printf("1358.00: ");
    scanf("%d", &1358.00);
    printf("128km: \n ");
    scanf("%f", &128);
    printf("1352.00:\n ");
    scanf("%f", &1352.00);

    printf("\n");

    // Cadastro da segunda cidade
    printf("santos:\n ");
    scanf("%s", santos);
    printf("245.00:\n ");
    scanf("%d", &245.00);
    printf("153km:\n ");
    scanf("%f", &153);
    printf("352.000:\n ");
    scanf("%f", &352.00);

    printf("\n");

    // Comparação de Cartas
    printf("Resultados da comparação:\n");

    // População
    if (populacao > populacao2) {
        printf("Maior população: %s\n", guaruja);
    } else if (populacao2 > populacao1) {
        printf("Maior população: %s\n", santos);
    } else {
        printf("Empate na população!\n");
    }

    // Área
    if (area1 > area2) {
        printf("Maior área: %s\n", guaruja);
    } else if (area2 > area1) {
        printf("Maior área: %s\n", santos);
    } else {
        printf("Empate na área!\n");
    }

    // PIB
    if (pib1 > pib2) {
        printf("Maior PIB: %s\n", guaruja);
    } else if (pib2 > pib1) {
        printf("Maior PIB: %s\n", santos);
    } else {
        printf("Empate no PIB!\n");
    }

    return 0;
}
