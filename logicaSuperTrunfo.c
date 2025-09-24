#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades

    char estado01[20],estado02[20];
    char codigo01[20],codigo02[20];
    char cidade01[20],cidade02[20];
    unsigned long int populacao01, populacao02;
    float area01,area02;
    float pib01, pib02;
    int turismo01,turismo02;
    float densidadep1,densidadep2;
    float pibpc1,pibpc2;
    int populacaoVencedora;
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades

    printf ("**Digite os dados da primeira Carta**\n");

    printf("Digite o Estado: \n");
    scanf("%s", &estado01);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigo01);

    printf("Digite a Cidade: \n");
    scanf("%s", &cidade01);

    printf("Digite a população: \n");
    scanf("%lu", &populacao01);

    printf("Digite a área em km²: \n");
    scanf("%f", &area01);

    printf("Digite o PIB: \n");
    scanf("%f", &pib01);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &turismo01);

    printf ("**Digite os dados da segunda carta:\n");
    printf("Digite o Estado: \n");
    scanf("%s", &estado02);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigo02);

    printf("Digite a Cidade: \n");
    scanf("%s", &cidade02);

    printf("Digite a população: \n");
    scanf("%lu", &populacao02);

    printf("Digite a área em km²: \n");
    scanf("%f", &area02);

    printf("Digite o PIB: \n");
    scanf("%f", &pib02);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &turismo02);

    // Calculando a Densidade populacional e a PIB per capita

    densidadep1 = (float) populacao01 / area01;
    densidadep2 = (float) populacao02 / area02;

    pibpc1 = (float) pib01 / populacao01;
    pibpc2 = (float) pib02 / populacao02;


    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    
    if (populacao01 > populacao02){
        printf ("Cidade 1 tem maior população.\n");
    } else {
        printf ("cidade 2 tem maior população. \n");
    }
    
    if (area01 > area02){
        printf ("Cidade 1 tem maior área por km².\n");
    } else {
        printf ("cidade 2 tem maior área por km². \n");
    }

    if (pib01 > pib02){
        printf ("Cidade 1 tem maior PIB.\n");
    } else {
        printf ("cidade 2 tem maior PIB. \n");
    }

    if (turismo01 > turismo02){
        printf ("Cidade 1 tem mais pontos turisticos.\n");
    } else {
        printf ("cidade 2 tem mais pontos turisticos. \n");
    }

    if (densidadep1 < densidadep2){
        printf ("Cidade 1 tem menor Densidade populacional.\n");
    } else {
        printf ("cidade 2 tem menor Densidade populacional. \n");
    }

    if (pibpc1> pibpc2){
        printf ("Cidade 1 tem maior PIB per capita.\n");
    } else {
        printf ("cidade 2 tem maior PIB per capita. \n");
    }


    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
