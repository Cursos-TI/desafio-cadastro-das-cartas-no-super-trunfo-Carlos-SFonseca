#include <stdio.h>

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

    } pais01[32]; // A variável pais01 é um array contendo 32 cartas, correspondendo aos 8 estados de A a H com 04 cidades em cada estado.

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Cartas Super Trunfo \n\n");

    printf("Realize o cadastro das cartas: \n\n");
    for (int i = 0; i < 32; i++)
    {
        if (i>0){
            printf("Cadastre a próxima carta: \n\n");
        }

        printf("Carta %d\n", i + 1);
        printf("\n");
        printf("Digite o estado:\n");
        scanf(" %c", &pais01[i].estado);
        printf("\n");
        printf("Digite o código da carta:\n");
        scanf(" %3s", pais01[i].codigo);
        getchar();
        printf("\n");
        printf("Digite o nome da cidade:\n");
        fgets(pais01[i].nome, sizeof(pais01[i].nome), stdin);

        int tamanhoNome = strlen(pais01[i].nome);
        if (tamanhoNome > 0 && pais01[i].nome[tamanhoNome - 1] == '\n') {
            pais01[i].nome[tamanhoNome - 1] = '\0';
        }

        printf("\n");
        printf("Digite a população da cidade:\n");
        scanf("%d", &pais01[i].populacao);
        printf("\n");
        printf("Digite a área da cidade:\n");
        scanf("%f", &pais01[i].area);
        printf("\n");
        printf("Digite o PIB da cidade:\n");
        scanf("%f", &pais01[i].pib);
        printf("\n");
        printf("Digite o número de pontos turísticos da cidade:\n");
        scanf("%d", &pais01[i].numPontosTuristicos);
        printf("\n");

        // Exibição dos Dados das Cartas:
        // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
        // Exiba os valores inseridos para cada atributo da cidade, um por linha.

        printf("Valores inseridos na Carta %d\n", i +1);
        printf("Estado: %c \n", pais01[i].estado);
        printf("Código da carta: %s \n", pais01[i].codigo);
        printf("Nome da cidade: %s \n", pais01[i].nome);
        printf("População: %d \n", pais01[i].populacao);
        printf("Área: %.2f \n", pais01[i].area);
        printf("PIB: %.2f \n", pais01[i].pib);
        printf("Números de pontos turísticos: %d \n", pais01[i].numPontosTuristicos);
        printf("\n");

        if (i==31){
            printf("Cadastro de cartas concluído! \n\n");
        }
    }

    return 0;
}
