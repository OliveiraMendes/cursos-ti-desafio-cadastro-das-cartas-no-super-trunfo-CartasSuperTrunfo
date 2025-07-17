#include <stdio.h> //#include inclui a biblioteca padrão de entrada e saída, necessária para usar a função printf.

int main(){ // int main() é onde o programa começa a execução. Toda aplicação em C começa pela função main.

//VARIAVEIS // Carta 1 e Carta 2

int carta1 = 1, carta2 = 2; 
char estado1 = 'T', estado2 = 'B';
char codigo1[5] = "T01", codigo2[5] = "B02";
char cidade1[50] = "Tocantins", cidade2[50] = "Bahia";
int populacao1 = 150098, populacao2 = 184750;
float area1 = 140008, area2 = 68304;
float pib1 = 42700, pib2 = 628.08;
int numero1 = 42, numero2 = 72;

//Entrada Carta 1

    printf("Digite os dados da Carta 1 (Tocantins):\n");

    printf("Digite a Carta: "); // printf; imprime a mensagem  na tela. O \n adiciona uma nova linha ao final da mensagem.
    scanf(" %d", &carta1); // scanf é usada para ler dados do usuário, que são então armazenados em variáveis.

    printf("Digite o Estado: ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta: ");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade1);

    printf("Digite a Populacao: ");
    scanf(" %d", &populacao1);

    printf("Digite a Area: ");
    scanf(" %f", &area1);

    printf("Digite o Pib: ");
    scanf(" %f", &pib1);

    printf("Digite o numero de Pontos Turisticos: ");
    scanf(" %d", &numero1);

    //Entrada Carta 2

    printf("\nDigite os dados da Carta 2 (Bahia): ");

    printf("Digite a Carta: ");
    scanf(" %d", &carta2);

    printf("Digite o Estado: ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta: ");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade2);

    printf("Digite a Populacao: ");
    scanf(" %d", &populacao2);

    printf("Digite a Area: ");
    scanf(" %f", &area2);

    printf("Digite o Pib: ");
    scanf(" %f", &pib2);

    printf("Digite o numero de Pontos Turisticos: ");
    scanf(" %d", &numero2);

    //Saída de dados Carta 1

    printf("\nCarta: %d\n", carta1);
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.3f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", numero1);

    //Saída de dados Carta 2

  
    printf("\nCarta: %d\n", carta2);
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.3f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n",numero2);
    
    return 0; // return 0; indica que o programa terminou com sucesso.

}

