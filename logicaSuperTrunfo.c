#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int main(){
    char estadoCarta1[8]; 
    char estadoCarta2[8];
    char codigoCarta1[4]; 
    char codigoCarta2[4];
    char nomeCarta1[50];
    char nomeCarta2[50];
    int populacaoCarta1, escolhaJogador, escolhaDois;
    int populacaoCarta2, opcao;
    float areaCarta1;
    float areaCarta2;
    float pibCarta1;
    float pibCarta2;
    int pontosCarta1, resultado1, resultado2;
    int pontosCarta2;
    float densidadeCarta1, densidadeCarta2;
    float pibperCarta1, pibperCarta2;
    float superpoderCarta1, superpoderCarta2;

    printf("\n |========|========|========|========|========|========|========|========|========|========|\n");
    printf("\n |========|========|========|========|========|========|========|========|========|========|\n");
    printf("\n |                 Em qual item a cidade da sua carta é a melhor?                          |\n");                    
    printf("\n |                          Será ela a mais populosa?                                      |\n");
    printf("\n |                             O de maior área?                                            |\n");
    printf("\n |                         Ou você tem o Super Trunfo?                                     |\n");
    printf("\n |                Escolha, compare e vença está emocionante disputa!                       |\n");
    printf("\n |========|========|========|========|========|========|========|========|========|========|\n");
    printf("\n |========|========|========|========|========|========|========|========|========|========|\n\n");

    printf("\n ==================================================== \n");
    printf("\n               Vamos comecar o jogo   !!              \n");
    printf("\n ==================================================== \n\n");

    printf("\n ==================================================== \n");
    printf("\n            Cadastre sua primeira carta !!             \n");
    printf("\n ==================================================== \n\n");
    printf("Digite o estado da sua cidade (De A a H): \n");
    scanf("%s", estadoCarta1);

    printf("Código da cidade (número de 01 a 04 ex: A01, B03): \n");
    scanf("%s", codigoCarta1);

    printf("Nome da cidade: \n");
    scanf("%s", nomeCarta1);
    
    printf("População da cidade: \n");
    scanf("%d", &populacaoCarta1);

    printf("Área em Km² da cidade: \n");
    scanf("%f", &areaCarta1);

    printf("Produto Interno Bruto (PIB) da cidade em bilhões de reais: \n");
    scanf("%f", &pibCarta1);

    printf("Número de pontos turísticos da cidade: \n");
    scanf("%d", &pontosCarta1);

    printf("\n =================================================== \n");
    printf("\n            Carta cadastrada com sucesso !!          \n");
    printf("\n =================================================== \n\n");

    printf("\n ==================================================== \n");
    printf("\n            Cadastre sua segunda carta !!              \n");
    printf("\n ==================================================== \n\n");
    printf("Digite o estado da sua cidade (De A a H): \n");
    scanf("%s", estadoCarta2);

    printf("Código da cidade (número de 01 a 04 ex: A01, B03): \n");
    scanf("%s", codigoCarta2);

    printf("Nome da cidade: \n");
    scanf("%s", nomeCarta2);

    printf("População da cidade: \n");
    scanf("%d", &populacaoCarta2);

    printf("Área em Km² da cidade: \n");
    scanf("%f", &areaCarta2);

    printf("Produto Interno Bruto (PIB) da cidade em bilhões de reais: \n");
    scanf("%f", &pibCarta2);

    printf("Número de pontos turísticos da cidade: \n");
    scanf("%d", &pontosCarta2);

    printf("\n =================================================== \n");
    printf("\n            Carta cadastrada com sucesso !!          \n");
    printf("\n =================================================== \n\n");

    densidadeCarta1 = (float) populacaoCarta1 / areaCarta1;             // Cálculo para densidade poppulacional Carta 1
    pibperCarta1 = pibCarta1 * 1000000000 / (float) populacaoCarta1;    // Cálculo pib per capita Carta 1

    densidadeCarta2 = (float) populacaoCarta2 / areaCarta2;             // Cálculo para densidade poppulacional Carta 2
    pibperCarta2 = pibCarta2 * 1000000000 / (float) populacaoCarta2;    // Cálculo pib per capita Carta 2

    superpoderCarta1 = populacaoCarta1 + areaCarta1 + pibCarta1 + pontosCarta1 + densidadeCarta1 + pibperCarta1 + (1 / densidadeCarta1); // Super poder da Carta 1
    superpoderCarta2 = populacaoCarta2 + areaCarta2 + pibCarta2 + pontosCarta2 + densidadeCarta2 + pibperCarta2 + (1 / densidadeCarta2); // Super poder da Carta 2


    printf("\n =================================================== \n");  // Resultados que foram inseridos na Carta 1
    printf("\n            Confira sua primeira carta               \n");
    printf("                       Carta 1:\n                        ");
    printf("\n =================================================== \n\n");
    printf("Estado: %s \n\n", estadoCarta1);
    printf("Código: %s \n\n", codigoCarta1);
    printf("Nome da Cidade: %s \n\n", nomeCarta1);
    printf("População: %d \n\n", populacaoCarta1);
    printf("Área: %.2f km² \n\n", areaCarta1);
    printf("PIB: %.2f bilhões de reais \n\n", pibCarta1);
    printf("Números de Pontos Turísticos: %d \n\n", pontosCarta1);
    printf("Densidade populacional: %.2f hab/km² \n\n", densidadeCarta1);
    printf("PIB per Capita: %.2f reais \n\n", pibperCarta1);
    printf("Super poder da carta: %.2f\n\n", superpoderCarta1);

    

    printf("\n =================================================== \n"); // Resultados que foram inseridos na Carta 2
    printf("\n            Confira sua segunda carta                \n");
    printf("                       Carta 2:\n                        ");
    printf("\n =================================================== \n\n");
    printf("Estado: %s \n\n", estadoCarta2);
    printf("Código: %s \n\n", codigoCarta2);
    printf("Nome da Cidade: %s \n\n", nomeCarta2);
    printf("População: %d \n\n", populacaoCarta1);
    printf("Área: %.2f km² \n\n", areaCarta2);
    printf("PIB: %.2f bilhões de reais \n\n", pibCarta2);
    printf("Números de Pontos Turísticos: %d \n\n", pontosCarta2);
    printf("Densidade populacional: %.2f hab/km² \n\n", densidadeCarta2);
    printf("PIB per Capita: %.2f reais \n\n", pibperCarta2);
    printf("Super poder da carta: %.2f\n\n", superpoderCarta2);

    printf("\n =================================================== \n"); // Primeira escolha do jogador, utilizando switch
    printf("\n             Escolha seu próximo passo:              \n");
    printf("\n =================================================== \n\n");

    printf("1. Ir para as comparações \n");
    printf("2. Ver Regras \n");
    printf("3. Encerrar \n");
    printf("Escolha uma opção: \n");
    scanf("%d", &opcao);
    

    switch (opcao){   
        case 2:                                                            // Primeiro switch (_)
        printf("\n =================================================== \n");
        printf("\n                       REGRAS:                       \n");
        printf("\n =================================================== \n");
        printf("Escolha as características da sua carta. Depois, os jogadores escolhem, cada um na sua vez, o valor correspondente a esta característica. \n");
        printf("Ganha aquele que tiver o maior valor. \n\n");
    break;
    case 3:
        printf("\n =================================================== \n");
        printf("\n                  Jogo Encerrado !!                  \n");
        printf("\n =================================================== \n");
    break;
    default:
        printf("\n =================================================== \n");
        printf("\n           Opção inválida. Tente novamente.          \n");
        printf("\n                  Jogo Encerrado !!                  \n");
        printf("\n =================================================== \n");
        break;                                                     
        

        case 1:
    printf("\n =================================================== \n"); // Segunda escolha do jogador, switch dentro do outro
    printf("\n                Menu de comparações                  \n");
    printf("\n =================================================== \n\n");

    printf("===== Para cada atributo vencido, será adicionado 1 ponto. =====\n");
    printf("=====  Selecione o primeiro atríbuto que deseja comparar:  ===== \n\n"); // Primeiro atributo de comparação
    printf(" 1. População \n");
    printf(" 2. Área \n");
    printf(" 3. PIB (Produto Interno Bruto \n");
    printf(" 4. Número de pontos túristicos \n");
    printf(" 5. Densidade demografica \n");
    scanf("%d", &escolhaJogador);

    switch (escolhaJogador){                                     // Segundo switch (_)
        case 1:
            printf("\n ===== Comparação escolhida:  ===== \n");
            printf("\n =====       População        ===== \n\n");
                if (resultado1 = populacaoCarta1 > populacaoCarta2 ? 1 : 0){
                    printf("Os atributos das cartas são: \n");
                    printf("Carta 1: %s. População: %d \n", nomeCarta1, populacaoCarta1);
                    printf("Carta 2: %s. População: %d \n\n", nomeCarta2, populacaoCarta2);
                }
        break;
        case 2:
            printf("\n ===== Comparação escolhida:  ===== \n");
            printf("\n =====         Área           ===== \n\n");
            if (resultado1 = areaCarta1 > areaCarta2 ? 1 : 0){
                    printf("Os atributos das cartas são: \n");
                    printf("Carta 1: %s. Área: %.2f \n", nomeCarta1, areaCarta1);
                    printf("Carta 2: %s. Área: %.2f \n\n", nomeCarta2, areaCarta2);
            }
        break;
        case 3:
            printf("\n ===== Comparação escolhida:  ===== \n");
            printf("\n =====          PIB           ===== \n\n");
            if (resultado1 = pibCarta1 > pibCarta2 ? 1 : 0){
                    printf("Os atributos das cartas são: \n");
                    printf("Carta 1: %s. Pib: %.2f \n", nomeCarta1, pibCarta1);
                    printf("Carta 2: %s. Pib: %.2f \n\n", nomeCarta2, pibCarta2);
            }
        break;
        case 4:
            printf("\n ===== Comparação escolhida:  ===== \n");
            printf("\n =====   Pontos turísticos    ===== \n\n");
            if (resultado1 = pontosCarta1 > pontosCarta2 ? 1 : 0){
                    printf("Os atributos das cartas são: \n");
                    printf("Carta 1: %s. Pontos turísticos: %d \n", nomeCarta1, pontosCarta1);
                    printf("Carta 2: %s. Pontos turísticos: %d \n\n", nomeCarta2, pontosCarta2);
            }
        break;
        case 5:
            printf("\n =====         Comparação escolhida:                      ===== \n");
            printf("\n =====   Densidade Populacional (menor vence)             ===== \n\n");
            if (resultado1 = densidadeCarta1 > densidadeCarta2 ? 1 : 0){
                    printf("Os atributos das cartas são: \n");
                    printf("Carta 1: %s. %.2f hab/km² \n", nomeCarta1, densidadeCarta1);
                    printf("Carta 2: %s. %.2f hab/km² \n\n", nomeCarta2, densidadeCarta2);
            }
        break;
        default:
            printf("\n =================================================== \n");
            printf("\n           Opção inválida. Tente novamente.          \n");
            printf("\n                  Jogo Encerrado !!                  \n");
            printf("\n =================================================== \n");
        break;
    }

        
    printf("===== Selecione o segundo atríbuto que deseja comparar ===== \n"); // Segundo atributo de comparação
    printf("OBSERVAÇÃO: Não selecione o mesmo atributo que o anterior. \n\n");
    printf(" 1. População \n");
    printf(" 2. Área \n");
    printf(" 3. PIB (Produto Interno Bruto \n");
    printf(" 4. Número de pontos túristicos \n");
    printf(" 5. Densidade demografica \n");
    scanf("%d", &escolhaDois);

    if (escolhaJogador == escolhaDois){
        printf("\n =================================================== \n");
        printf("\n           Opção inválida. Tente novamente.          \n");
        printf("\n                  Jogo Encerrado !!                  \n");
        printf("\n =================================================== \n");
    } else {
    switch (escolhaDois){
        case 1:
            printf("\n ===== Comparação escolhida:  ===== \n");
            printf("\n =====       População        ===== \n\n");
                if (resultado2 = populacaoCarta1 > populacaoCarta2 ? 1 : 0){
                    printf("Os atributos das cartas são: \n");
                    printf("Carta 1: %s. População: %d \n", nomeCarta1, populacaoCarta1);
                    printf("Carta 2: %s. População: %d \n\n", nomeCarta2, populacaoCarta2);
                }
        break;
        case 2:
            printf("\n ===== Comparação escolhida:  ===== \n");
            printf("\n =====         Área           ===== \n\n");
            if (resultado2 = areaCarta1 > areaCarta2 ? 1 : 0){
                    printf("Os atributos das cartas são: \n");
                    printf("Carta 1: %s. Área: %.2f \n", nomeCarta1, areaCarta1);
                    printf("Carta 2: %s. Área: %.2f \n\n", nomeCarta2, areaCarta2);
            }
        break;
        case 3:
            printf("\n ===== Comparação escolhida:  ===== \n");
            printf("\n =====          PIB           ===== \n\n");
            if (resultado2 = pibCarta1 > pibCarta2 ? 1 : 0){
                    printf("Os atributos das cartas são: \n");
                    printf("Carta 1: %s. Pib: %.2f \n", nomeCarta1, pibCarta1);
                    printf("Carta 2: %s. Pib: %.2f \n\n", nomeCarta2, pibCarta2);
            }
        break;
        case 4:
            printf("\n ===== Comparação escolhida:  ===== \n");
            printf("\n =====   Pontos turísticos    ===== \n\n");
            if (resultado2 = pontosCarta1 > pontosCarta2 ? 1 : 0){
                    printf("Os atributos das cartas são: \n");
                    printf("Carta 1: %s. Pontos turísticos: %d \n", nomeCarta1, pontosCarta1);
                    printf("Carta 2: %s. Pontos turísticos: %d \n\n", nomeCarta2, pontosCarta2);
            }
        break;
        case 5:
            printf("\n =====         Comparação escolhida:                      ===== \n");
            printf("\n =====   Densidade Populacional (menor vence)             ===== \n\n");
            if (resultado2 = densidadeCarta1 > densidadeCarta2 ? 1 : 0){
                    printf("Os atributos das cartas são: \n");
                    printf("Carta 1: %s. %.2f hab/km² \n", nomeCarta1, densidadeCarta1);
                    printf("Carta 2: %s. %.2f hab/km² \n\n", nomeCarta2, densidadeCarta2);
            }
        break;
        default:
            printf("\n =================================================== \n");
            printf("\n           Opção inválida. Tente novamente.          \n");
            printf("\n                  Jogo Encerrado !!                  \n");
            printf("\n =================================================== \n");
        break;
    }                                            // terceiro switch (_)
        
}      
} 
if (resultado1 + resultado2 > 1){
    printf("\n =================================================== \n");
    printf("\n               A carta vencedora foi:                \n");
    printf("\n                     Carta 1 !!                      \n");
    printf("\n                  Jogo Encerrado !!                  \n");
    printf("\n =================================================== \n\n");
} else if (resultado1 + resultado2 < 1){
    printf("\n =================================================== \n");
    printf("\n               A carta vencedora foi:                \n");
    printf("\n                     Carta 2 !!                      \n");
    printf("\n                  Jogo Encerrado !!                  \n");
    printf("\n =================================================== \n\n");
} else{
    printf("\n =================================================== \n");
    printf("\n                  O jogo empatou !!                  \n");
    printf("\n                  Jogo Encerrado !!                  \n");
    printf("\n =================================================== \n\n");
}
} 




