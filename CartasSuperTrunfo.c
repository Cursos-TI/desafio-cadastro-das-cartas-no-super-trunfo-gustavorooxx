#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Carta 1
    char estado1[3];
    char codigo_carta1[20];
    char nome1[20];
    int populacao1;
    float area1;
    float pib1;
    int numero_pontos_turisticos1;
    float desidade_populacional1;
    float pib_per_capita1;
    float super_poder1;

    // Carta 2
    char estado2[3];
    char codigo_carta2[20];
    char nome2[20];
    int populacao2;
    float area2;
    float pib2;
    int numero_pontos_turisticos2;
    float desidade_populacional2;
    float pib_per_capita2;
    float super_poder2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Cadastro Carta 1
    printf("Digite a sigla do estado da Carta 1: ");
    scanf("%s", estado1);
    printf("Digite o código da Carta 1: ");
    scanf("%s", codigo_carta1);
    printf("Digite o nome da cidade da Carta 1: ");
    scanf("%s", &nome1);
    printf("Digite a população da Carta 1: ");
    scanf("%d", &populacao1);
    printf("Digite a área da Carta 1: ");
    scanf("%f", &area1);
    printf("Digite o PIB da Carta 1: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da Carta 1: ");
    scanf("%d", &numero_pontos_turisticos1);
    // calculando variaveis
    desidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;
    super_poder1 = populacao1 + area1 + pib1 + numero_pontos_turisticos1 + pib_per_capita1 + (1 / desidade_populacional1);

    // Cadastro Carta 2
    printf("Digite a sigla do estado da Carta 2: ");
    scanf("%s", estado2);
    printf("Digite o código da Carta 2: ");
    scanf("%s", codigo_carta2);
    printf("Digite o nome da cidade da Carta 2: ");
    scanf("%s", &nome2);
    printf("Digite a população da Carta 2: ");
    scanf("%d", &populacao2);
    printf("Digite a área da Carta 2: ");
    scanf("%f", &area2);
    printf("Digite o PIB da Carta 2: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da Carta 2: ");
    scanf("%d", &numero_pontos_turisticos2);
    // calculando variaveis
    desidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    super_poder2 = populacao2 + area2 + pib2 + numero_pontos_turisticos2 + pib_per_capita2 + (1 / desidade_populacional2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Exibição dos dados Carta 1
    printf("\n");
    printf("Carta 1: \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Número de Ponto Turíticos: %d\n", numero_pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", desidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);
    // Exibição dos dados Carta 2
    printf("\n");
    printf("Carta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Número de Ponto Turíticos: %d\n", numero_pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", desidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);
    // Comparando as cartas
    printf("Comparação de Cartas\n");
    printf("População: Carta 1 venceu: %d\n", populacao1 > populacao2);
    printf("População: Carta 2 venceu: %d\n", populacao2 > populacao1);
    printf("Área: Carta 1 venceu: %d\n", area1 > area2);
    printf("Área: Carta 2 venceu: %d\n", area2 > area1);
    printf("PIB: Carta 1 venceu: %d\n", pib1 > pib2);
    printf("PIB: Carta 2 venceu: %d\n", pib2 > pib1);
    printf("Pontos Turísticos: Carta 1 venceu: %d\n", numero_pontos_turisticos1 > numero_pontos_turisticos2);
    printf("Pontos Turísticos: Carta 2 venceu: %d\n", numero_pontos_turisticos2 > numero_pontos_turisticos1);
    printf("Densidade populacional: Carta 1 venceu: %d\n", desidade_populacional1 < desidade_populacional2);
    printf("Densidade populacional: Carta 2 venceu: %d\n", desidade_populacional2 < desidade_populacional1);
    printf("PIB per Capita: Carta 1 venceu: %d\n", pib_per_capita1 > pib_per_capita2);
    printf("PIB per Capita: Carta 2 venceu: %d\n", pib_per_capita2 > pib_per_capita1);
    printf("Super Poder: Carta 1 venceu: %d\n", super_poder1 > super_poder2);
    printf("Super Poder: Carta 2 venceu: %d\n", super_poder2 > super_poder1);

    return 0;
}
