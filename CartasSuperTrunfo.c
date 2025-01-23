#include <stdio.h>
#include <stdlib.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste larissa

int main()
{
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    struct CartasSuperTrunfo
    {
        char estado;
        char codigo[4];
        char nome[25];
        int populacao;
        float area;
        float pib;
        int numPontosTuristicos;

    } pais01[32];

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Cartas Super Trunfo \n\n");
    for (int i = 0; i < 32; i++)
    {
        printf("Digite o estado:\n");
        scanf("%c", pais01[i].estado);
        printf("\n");
        printf("Digite o código da carta:\n");
        scanf("%3s", pais01[i].codigo);
        printf("\n");
        printf("Digite o nome da cidade:\n");
        fgets(pais01.nome, sizeof(pais01[i].nome), stdin);
        printf("\n");
        printf("Digite a população da cidade:\n");
        scanf("%d", pais01[i].populacao);
        printf("\n");
        printf("Digite a área da cidade:\n");
        scanf("%f", pais01[i].area);
        printf("\n");
        printf("Digite o PIB da cidade:\n");
        scanf("%f", pais01[i].pib);
        printf("Digite o número de pontos turísticos da cidade:\n");
        scanf("%d", pais01[i].numPontosTuristicos);
        printf("\n");

        // Exibição dos Dados das Cartas:
        // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
        // Exiba os valores inseridos para cada atributo da cidade, um por linha.

        printf("Valores inseridos\n");
        printf("Estado: %c", pais01->estado);
        printf("Código da carta: %s", pais01->codigo);
        printf("\n");
        printf("Nome: %s", pais01->nome);
        printf("\n");
        printf("População: %d", pais01->populacao);
        printf("\n");
        printf("Área: %f", pais01->area);
        printf("\n");
        printf("PIB: %f", pais01->pib);
        printf("\n");
        printf("Números de pontos turísticos: %d", pais01->numPontosTuristicos);
    }

    return 0;
}
