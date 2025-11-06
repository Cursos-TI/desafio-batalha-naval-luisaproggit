#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F','G', 'H', 'I', 'J'};
    int tabuleiro[10][10] = {0};//Declaração para matriz tabuleiro.

//Inicializando tabuleiro(com numeros zero)
    for(int i = 0; i < 10; i++){ 
        for(int j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    } 
    
//Posicionando os navios

    int navio1[3];
    int navio2[3];

//Navio Vertical
    tabuleiro[0][1] = 3;
    tabuleiro[0][2] = 3;
    tabuleiro[0][3] = 3;

//Navio Horizontal
    tabuleiro[5][8] = 3;
    tabuleiro[6][8] = 3;
    tabuleiro[7][8] = 3;

//Navio na diagonal
    tabuleiro[7][1] = 3;
    tabuleiro[8][2] = 3;
    tabuleiro[9][3] = 3;

//Navio na diagonal secundária
    tabuleiro[0][8] = 3;
    tabuleiro[1][7] = 3;
    tabuleiro[2][6] = 3;



//Posição das Coordenadas Navios Vertical, Horizontal 

    for (int i = 0; i < 10; i++) {
        for ( int j = 0; j < 10; j++) {
            if(tabuleiro[i][j] == 3) {
                printf("(%d, %d)\n", i, j);
            }
            
        }
    }

//Posição das Coordenadas Navios na Diagonal

    for (int i = 0; i < 10; i++) {
        for ( int j = 0; j < 10; j++) {
            if(tabuleiro[i][j] == 3) {
                printf("(%d, %d)\n", i, j);
            }
        
        }
    }

//Imprimindo Tabuleiro.
    printf("Tabuleiro Batalha Naval\n");
    printf(" ");//Espaços para alinhar as colunas.

    for(int j = 0; j < 10; j++){
    printf("%c", linha[j]); //Imprimindo numeros das colunas.

    }
    printf("\n");

    for(int i = 0; i < 10; i++){
        printf("%d", i + 1); //Imprimindo numeros das linhas.
        for(int j = 0; j < 10; j++){
            printf("%d", tabuleiro[i] [j]); 

        }
        printf("\n");
    }

 
  
    return 0;

}





    

    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0



