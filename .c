#include <stdio.h>

int main() {
    int populacao1;
    int ponto_turisticos1;
    char nome_cidade1[20], nome_estado1[20], codigo1[10];
    float area1, PIB1;

    // Cadastro carta 1
    printf("----CADASTRO DE CARTA 1----\n");
    printf("Digite o estado: \n");
    scanf("%s", nome_estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_cidade1);

    printf("Digite a população: \n");
    scanf("%ld", &populacao1);

    printf("Digite a área em km²:\n");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões):\n");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &ponto_turisticos1);

    PIB1 = PIB1 * 1000000000;
    float densidade1 = populacao1 / area1;
    float percapita1 = PIB1 / populacao1;

    // Cadastro carta 2
    signed long int populacao2;
    int ponto_turisticos2;
    char nome_cidade2[20], nome_estado2[20], codigo2[10];
    float area2, PIB2;

    printf("\n----CADASTRO DE CARTA 2----\n");
    printf("Digite o estado: \n");
    scanf("%s", nome_estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_cidade2);

    printf("Digite a população: \n");
    scanf("%ld", &populacao2);

    printf("Digite a área em km²:\n");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões):\n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &ponto_turisticos2);

    PIB2 = PIB2 * 1000000000;
    float densidade2 = populacao2 / area2;
    float percapita2 = PIB2 / populacao2;

    // Menu
    int opcao;
    printf("\n---- MENU DE COMPARAÇÃO ----\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Escolha o atributo para comparar: ");
    scanf("%d", &opcao);

    printf("\n--- Comparando cartas: %s x %s ---\n", nome_cidade1, nome_cidade2);

    switch (opcao) {
        case 1:
            printf("População: %s = %ld | %s = %ld\n", nome_cidade1, populacao1, nome_cidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: %s venceu!\n", nome_cidade1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: %s venceu!\n", nome_cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2:
            printf("Área: %s = %.2f km² | %s = %.2f km²\n", nome_cidade1, area1, nome_cidade2, area2);
            if (area1 > area2) {
                printf("Resultado: %s venceu!\n", nome_cidade1);
            } else if (area2 > area1) {
                printf("Resultado: %s venceu!\n", nome_cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3:
            printf("PIB: %s = %.2f R$ | %s = %.2f R$\n", nome_cidade1, PIB1, nome_cidade2, PIB2);
            if (PIB1 > PIB2) {
                printf("Resultado: %s venceu!\n", nome_cidade1);
            } else if (PIB2 > PIB1) {
                printf("Resultado: %s venceu!\n", nome_cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4:
            printf("Pontos Turísticos: %s = %d | %s = %d\n", nome_cidade1, ponto_turisticos1, nome_cidade2, ponto_turisticos2);
            if (ponto_turisticos1 > ponto_turisticos2) {
                printf("Resultado: %s venceu!\n", nome_cidade1);
            } else if (ponto_turisticos2 > ponto_turisticos1) {
                printf("Resultado: %s venceu!\n", nome_cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5:
            printf("Densidade Populacional: %s = %.2f hab/km² | %s = %.2f hab/km²\n", nome_cidade1, densidade1, nome_cidade2, densidade2);
            if (densidade1 < densidade2) {
                printf("Resultado: %s venceu! (menor densidade)\n", nome_cidade1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: %s venceu! (menor densidade)\n", nome_cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opção inválida. Tente novamente.\n");
            break;
    }

    return 0;
}
