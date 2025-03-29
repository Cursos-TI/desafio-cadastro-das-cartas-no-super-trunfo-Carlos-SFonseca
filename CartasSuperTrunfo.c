#include <stdio.h>
#include <string.h>
#include <math.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste larissa

int CompareAtributo(float atributoCarta01, float atributoCarta02)
{ // função para comparar os atributos

    if (atributoCarta01 > atributoCarta02)
    {
        return 1;
    }
    else if (atributoCarta01 < atributoCarta02)
    {
        return 2;
    }
    else
    {
        return 0;
    }
}

void ExibeResultado(int resultadoComparado, char nomeCarta01[], char nomeCarta02[])
{ // função para exibir o resultado da comparação de atributos
    if (resultadoComparado == 1)
    {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCarta01);
    }
    else if (resultadoComparado == 2)
    {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCarta02);
    }
    else
    {
        printf("Resultado: Empate!\n");
    }
}

float CalculaSuperPoder(unsigned long int populacao, float area, float pib,
                        int numPontosTuristicos, float densidadePopulacional, float pibPerCapita)
{ // função para calcular o super poder da carta
    float resultado = (float)populacao + area + pib + (float)numPontosTuristicos + (1 / densidadePopulacional) + pibPerCapita;
    return resultado;
}

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
    printf("Números de pontos turísticos: %d \n", Carta01_numPontosTuristicos);
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
    printf("Números de pontos turísticos: %d \n", Carta02_numPontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km² \n", Carta02_densidadePopulacional);
    printf("PIB per Capita: %.2f reais \n", Carta02_pibPerCapita);
    printf("Super Poder: %.2f  \n\n", Carta02_superPoder);

    // menu de atributos para comparação
    int escolha;
    int resultado;
    printf("Escolha o atributo a ser comparado:\n\n");
    printf("Digite 1 para comparar a População.\n");
    printf("Digite 2 para comparar a Área.\n");
    printf("Digite 3 para comparar o PIB.\n");
    printf("Digite 4 para comparar o Número de Pontos Turísticos.\n");
    printf("Digite 5 para comparar a Densidade Populacional.\n");
    printf("Digite 6 para comparar o PIB per Capita.\n");
    printf("Digite 7 para comparar o Super Poder.\n");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        printf("Comparação de Cartas(Atributo: População):\n\n");
        printf("Carta 1 - %s: %lu\n", Carta01_nome, Carta01_populacao);
        printf("Carta 2 - %s: %lu\n", Carta02_nome, Carta02_populacao);
        resultado = CompareAtributo((float)Carta01_populacao, (float)Carta02_populacao); // converte o atributo para float, pois a função recebe float como parâmetro
        ExibeResultado(resultado,Carta01_nome, Carta02_nome);
        break;

    case 2:
        printf("Comparação de Cartas(Atributo: Área):\n\n");
        printf("Carta 1 - %s: %.2f km²\n", Carta01_nome, Carta01_area);
        printf("Carta 2 - %s: %.2f km²\n", Carta02_nome, Carta02_area);
        resultado = CompareAtributo(Carta01_area,Carta02_area);
        ExibeResultado(resultado,Carta01_nome, Carta02_nome);
        break;
    
    case 3:
        printf("Comparação de Cartas(Atributo: PIB):\n\n");
        printf("Carta 1 - %s: %.2f bilhões de reais\n", Carta01_nome, Carta01_pib);
        printf("Carta 2 - %s: %.2f bilhões de reais\n", Carta02_nome, Carta02_pib);
        resultado = CompareAtributo(Carta01_pib,Carta02_pib);
        ExibeResultado(resultado,Carta01_nome, Carta02_nome);
        break;

    case 4:
        printf("Comparação de Cartas(Atributo: Número de Pontos Turísticos):\n\n");
        printf("Carta 1 - %s: %d\n", Carta01_nome, Carta01_numPontosTuristicos);
        printf("Carta 2 - %s: %d\n", Carta02_nome, Carta02_numPontosTuristicos);
        resultado = CompareAtributo((float)Carta01_numPontosTuristicos,(float)Carta02_numPontosTuristicos); // converte o atributo para float, pois a função recebe float como parâmetro
        ExibeResultado(resultado,Carta01_nome, Carta02_nome);
        break;
    
    case 5:
        printf("Comparação de Cartas(Atributo: Densidade Populacional):\n\n");
        printf("Carta 1 - %s: %.2f hab/km²\n", Carta01_nome, Carta01_densidadePopulacional);
        printf("Carta 2 - %s: %.2f hab/km²\n", Carta02_nome, Carta02_densidadePopulacional);
        resultado = CompareAtributo(1/Carta01_densidadePopulacional, 1/Carta02_densidadePopulacional); // compara o inverso da densidade, pois a menor vence
        ExibeResultado(resultado,Carta01_nome, Carta02_nome);
        break;

    case 6:
        printf("Comparação de Cartas(Atributo: PIB per Capita):\n\n");
        printf("Carta 1 - %s: %.2f reais\n", Carta01_nome, Carta01_pibPerCapita);
        printf("Carta 2 - %s: %.2f reais\n", Carta02_nome, Carta02_pibPerCapita);
        resultado = CompareAtributo(Carta01_pibPerCapita, Carta02_pibPerCapita);
        ExibeResultado(resultado,Carta01_nome, Carta02_nome);
        break;

    case 7:
        printf("Comparação de Cartas(Atributo: Super Poder):\n\n");
        printf("Carta 1 - %s: %.2f \n", Carta01_nome, Carta01_superPoder);
        printf("Carta 2 - %s: %.2f \n", Carta02_nome, Carta02_superPoder);
        resultado = CompareAtributo(Carta01_superPoder, Carta02_superPoder);
        ExibeResultado(resultado,Carta01_nome, Carta02_nome);
        break;

    default:
        printf("Opção inválida, tente novamente!");
        break;
    }

    printf("\n\n");

    return 0;
}
