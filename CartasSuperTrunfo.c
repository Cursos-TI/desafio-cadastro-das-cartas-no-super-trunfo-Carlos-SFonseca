#include <stdio.h>
#include <string.h>
#include <math.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste larissa

float CalculaSuperPoder(unsigned long int populacao, float area, float pib,
                        int numPontosTuristicos, float densidadePopulacional, float pibPerCapita)
{
    float resultado = (float)populacao + area + pib + (float)numPontosTuristicos + (1 / densidadePopulacional) + pibPerCapita;
    return resultado;
} // faz o calculo do valor do super poder da carta

int main()
{
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Cartas Super Trunfo \n\n");

    printf("Realize o cadastro da carta 1: \n\n");

    // propriedades da carta 1:
    char Carta01_estado;
    char Carta01_codigo[4];
    char Carta01_nome[25];
    unsigned long int Carta01_populacao;
    float Carta01_area;
    float Carta01_pib;
    int Carta01_numPontosTuristicos;
    float Carta01_densidadePopulacional;
    float Carta01_pibPerCapita;
    float Carta01_superPoder;

    // entradas pelo o usuário para a carta 1:
    printf("Digite o estado (de 'A' a 'H'): \n");
    scanf("%c", &Carta01_estado);

    printf("Digite o código da carta (ex: A01, B03): \n");
    scanf("%3s", Carta01_codigo);

    getchar(); // libera o \n deixado pelo scanf anterior.
    printf("Digite o nome da cidade: \n");
    fgets(Carta01_nome, 25, stdin);
    Carta01_nome[strcspn(Carta01_nome, "\n")] = 0;

    printf("Digite a população: \n");
    scanf("%lu", &Carta01_populacao);

    printf("Digite a Área em km²: \n");
    scanf("%f", &Carta01_area);

    printf("Digite o PIB em billões de reais: \n");
    scanf("%f", &Carta01_pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &Carta01_numPontosTuristicos);
    getchar(); // libera o \n deixado pelo scanf anterior.

    Carta01_densidadePopulacional = (float)Carta01_populacao / Carta01_area;      // calcula a densidade
    Carta01_pibPerCapita = (Carta01_pib * pow(10, 9)) / (float)Carta01_populacao; // calcula o pib per capita com o valor do pib sendo multiplicado por 10^9(bilhão)
    Carta01_superPoder = CalculaSuperPoder(Carta01_populacao, Carta01_area, Carta01_pib, Carta01_numPontosTuristicos, Carta01_densidadePopulacional, Carta01_pibPerCapita);

    printf("\n");
    printf("Realize o cadastro da carta 2: \n\n");

    // propriedades da carta 2:
    char Carta02_estado;
    char Carta02_codigo[4];
    char Carta02_nome[25];
    unsigned long int Carta02_populacao;
    float Carta02_area;
    float Carta02_pib;
    int Carta02_numPontosTuristicos;
    float Carta02_densidadePopulacional;
    float Carta02_pibPerCapita;
    float Carta02_superPoder;

    // entradas pelo o usuário para a carta 2:
    printf("Digite o estado (de 'A' a 'H'): \n");
    scanf("%c", &Carta02_estado);

    printf("Digite o código da carta (ex: A01, B03): \n");
    scanf("%3s", Carta02_codigo);

    getchar(); // libera o \n deixado pelo scanf anterior.
    printf("Digite o nome da cidade: \n");
    fgets(Carta02_nome, 25, stdin);
    Carta02_nome[strcspn(Carta02_nome, "\n")] = 0;

    printf("Digite a população: \n");
    scanf("%lu", &Carta02_populacao);

    printf("Digite a Área em km²: \n");
    scanf("%f", &Carta02_area);

    printf("Digite o PIB em billões de reais: \n");
    scanf("%f", &Carta02_pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &Carta02_numPontosTuristicos);
    getchar();                                                                    // libera o \n deixado pelo scanf anterior.
    Carta02_densidadePopulacional = (float)Carta02_populacao / Carta02_area;      // calcula a densidade
    Carta02_pibPerCapita = (Carta02_pib * pow(10, 9)) / (float)Carta02_populacao; // calcula o pib per capita com o valor do pib sendo multiplicado por 10^9(bilhão)
    Carta02_superPoder = CalculaSuperPoder(Carta02_populacao, Carta02_area, Carta02_pib, Carta02_numPontosTuristicos, Carta02_densidadePopulacional, Carta02_pibPerCapita);
    
    printf("\n");

    // exibindo as cartas
    printf("Cartas inseridas: \n\n");
    printf("Carta 1:\n");
    printf("Estado: %c \n", Carta01_estado);
    printf("Código: %s \n", Carta01_codigo);
    printf("Nome da cidade: %s \n", Carta01_nome);
    printf("População: %lu \n", Carta01_populacao);
    printf("Área: %.2f km²\n", Carta01_area);
    printf("PIB: %.2f bilhões de reais \n", Carta01_pib);
    printf("Densidade Populacional: %.2f hab/km² \n", Carta01_densidadePopulacional);
    printf("PIB per Capita: %.2f reais \n", Carta01_pibPerCapita);
    printf("Super Poder: %.2f  \n\n", Carta01_superPoder);

    printf("Carta 2:\n");
    printf("Estado: %c \n", Carta02_estado);
    printf("Código: %s \n", Carta02_codigo);
    printf("Nome da cidade: %s \n", Carta02_nome);
    printf("População: %lu \n", Carta02_populacao);
    printf("Área: %.2f km²\n", Carta02_area);
    printf("PIB: %.2f bilhões de reais \n", Carta02_pib);
    printf("Densidade Populacional: %.2f hab/km² \n", Carta02_densidadePopulacional);
    printf("PIB per Capita: %.2f reais \n", Carta02_pibPerCapita);
    printf("Super Poder: %.2f  \n\n", Carta02_superPoder);

    // comparando as cartas
    printf("Comparação de Cartas(Atributo: População):\n\n");
    printf("Carta 1 - %s: %lu\n",Carta01_nome,Carta01_populacao);
    printf("Carta 2 - %s: %lu\n",Carta02_nome,Carta02_populacao);
    if(Carta01_populacao>Carta02_populacao){
        printf("Resultado: Carta 1 (%s) venceu!\n",Carta01_nome);
    }else{
        printf("Resultado: Carta 2 (%s) venceu!\n",Carta02_nome);
    }
    
    printf("\n\n");

    return 0;
}
