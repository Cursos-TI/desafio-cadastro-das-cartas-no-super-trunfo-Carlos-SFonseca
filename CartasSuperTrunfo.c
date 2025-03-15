#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste larissa

int main()
{
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Cartas Super Trunfo \n\n");

    printf("Realize o cadastro da carta 1: \n\n");

    //propriedades da carta 1:
    char Carta01_estado;
    char Carta01_codigo[4];
    char Carta01_nome[25];
    int Carta01_populacao;
    float Carta01_area;
    float Carta01_pib;
    int Carta01_numPontosTuristicos;

    //entradas pelo o usuário para a carta 1:
    printf("Digite o estado (de 'A' a 'H'): \n");
    scanf("%c",&Carta01_estado);

    printf("Digite o código da carta (ex: A01, B03): \n");
    scanf("%3s",Carta01_codigo);

    getchar();
    printf("Digite o nome da cidade: \n");
    fgets(Carta01_nome,25,stdin);
    Carta01_nome[strcspn(Carta01_nome, "\n")] = 0;

    printf("Digite a população: \n");
    scanf("%d",&Carta01_populacao);
    
    printf("Digite a Área em km²: \n");
    scanf("%f",&Carta01_area);    

    printf("Digite o PIB em billões de reais: \n");
    scanf("%f",&Carta01_pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d",&Carta01_numPontosTuristicos);
    getchar();
    printf("\n");   


    printf("Realize o cadastro da carta 2: \n\n");

    //propriedades da carta 2:
    char Carta02_estado;
    char Carta02_codigo[4];
    char Carta02_nome[25];
    int Carta02_populacao;
    float Carta02_area;
    float Carta02_pib;
    int Carta02_numPontosTuristicos;

    //entradas pelo o usuário para a carta 2:
    printf("Digite o estado (de 'A' a 'H'): \n");
    scanf("%c",&Carta02_estado);

    printf("Digite o código da carta (ex: A01, B03): \n");
    scanf("%3s",Carta02_codigo);

    getchar();
    printf("Digite o nome da cidade: \n");
    fgets(Carta02_nome,25,stdin);
    Carta02_nome[strcspn(Carta02_nome, "\n")] = 0;

    printf("Digite a população: \n");
    scanf("%d",&Carta02_populacao);
    
    printf("Digite a Área em km²: \n");
    scanf("%f",&Carta02_area);    

    printf("Digite o PIB em billões de reais: \n");
    scanf("%f",&Carta02_pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d",&Carta02_numPontosTuristicos);
    getchar();

    printf("\n"); 

    //exibindo as cartas
    printf("Cartas inseridas: \n\n");
    printf("Carta 1:\n");
    printf("Estado: %c \n", Carta01_estado);
    printf("Código: %s \n", Carta01_codigo);
    printf("Nome da cidade: %s \n", Carta01_nome);
    printf("População: %d \n", Carta01_populacao);
    printf("Área: %.2f km²\n", Carta01_area);
    printf ("PIB: %.2f bilhões de reais \n\n", Carta01_pib);

    printf("Carta 2:\n");
    printf("Estado: %c \n", Carta02_estado);
    printf("Código: %s \n", Carta02_codigo);
    printf("Nome da cidade: %s \n", Carta02_nome);
    printf("População: %d \n", Carta02_populacao);
    printf("Área: %.2f km²\n", Carta02_area);
    printf ("PIB: %.2f bilhões de reais \n\n", Carta02_pib);

     
    return 0;
}
