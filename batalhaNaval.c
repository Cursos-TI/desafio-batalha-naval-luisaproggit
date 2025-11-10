#include <stdio.h>

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
    tabuleiro[3][9] = 3;
    tabuleiro[4][9] = 3;
    tabuleiro[5][9] = 3;

//Navio na diagonal
    tabuleiro[7][7] = 3;
    tabuleiro[8][8] = 3;
    tabuleiro[9][9] = 3;

//Navio na diagonal secundária
    tabuleiro[0][9] = 3;
    tabuleiro[1][8] = 3;
    tabuleiro[2][7] = 3;

//Imprimindo as posições Navios

    for (int i = 0; i < 10; i++) {
        for ( int j = 0; j < 10; j++) {
            if(tabuleiro[i][j] == 3) {
                printf("(%d, %d)\n", i, j);
            
            }
            
        }
    }

//Habilidade especiais em cone
//matriz em cone

 #define linhas 5
 #define colunas 5
    
    int A[linhas][colunas] = {{0, 1, 2, 3, 4},{5, 6, 7, 8, 9}};
    int B[linhas][colunas] = {{9, 8, 7, 6, 5},{4, 3, 2, 1, 0}};
    int matriz[5][5];

    tabuleiro[1][3] = 1;
    tabuleiro[2][2] = 1;
    tabuleiro[2][3] = 1;
    tabuleiro[2][4] = 1;
    tabuleiro[3][1] = 1;
    tabuleiro[3][2] = 1;
    tabuleiro[3][3] = 1;
    tabuleiro[3][4] = 1;
    tabuleiro[3][5] = 1;

printf("Habilidade em Cone\n");
int j;
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= 5; j++) { 
            if(i == 1){
                if(j == 3){
                printf("0");
            }else{
                printf("0");
            }
            }else if(i == 2){
                if(j == 3){
                    printf("1");
                }else{
                    printf("0");
                }
            }else if (i == 3) {
                if (j >= 2 && j  <= 4 ) {
                    printf("1"); 
                }else{
                    printf("0");
                }
            }else if (i == 4){
                printf("1");
            
            }else if(i == 5) {
                if(j == 3) {
                    printf("0");
                }else{
                    printf("0");
                }
            }
             
        }
        printf("\n");

    }

 //Habilidade especiais em cruz
 //matriz em cruz

    tabuleiro[5][3] = 1;
    tabuleiro[6][3] = 1;
    tabuleiro[7][1] = 1;
    tabuleiro[7][2] = 1;
    tabuleiro[7][3] = 1;
    tabuleiro[7][4] = 1;
    tabuleiro[7][5] = 1;
    tabuleiro[8][3] = 1;
    tabuleiro[9][3] = 1;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++) {
            if(i == 2 || j == 2) {
                matriz[i][j] = 1;
            
            }else{
                matriz[i][j] = 0;

                if(i == 2 || j == 2) {
                    matriz[j][i] = 1;

                }else{
                    matriz[j][i] = 0;
                }
            }
        }
    }

//imprimindo matriz cruz
printf("Habilidade em cruz\n");
for(int i = 0;i < 5; i++) {
    for(int j = 0; j < 5; j++) {
        printf("%d", matriz[i][j]);
        
    }

    printf("\n");
}

//Habilidades especiais em Octaedro
//matriz em octaedro
    tabuleiro[4][6] = 1;
    tabuleiro[5][5] = 1;
    tabuleiro[5][6] = 1;
    tabuleiro[5][7] = 1;
    tabuleiro[6][6] = 1;
    

printf("Habilidade em Octaedro\n");
for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= 5; j++) { 
            if(i == 1){
                if(j == 3){
                printf("0");
            }else{
                printf("0");
            }
            }else if(i == 2){
                if(j == 3){
                    printf("1");
                }else{
                    printf("0");
                }
            }else if (i == 3) {
                if (j >= 2 && j  <= 4){
                    printf("1"); 
                }else{
                    printf("0");
                }
            }else if(i == 4){
                if(j == 3){
                    printf("1");
                }else{
                    printf("0");
                }
            
            }else if(i == 5) {
                if(j == 3) {
                    printf("0");
                }else{
                    printf("0");
                }
            }
             
        }
                      
        printf("\n");

    }

//função exibir no tabuleiro

void exibirTabuleiro(int tabuleiro[5][5], int tamanho){
    int linha,coluna;
    for(int linha = 0; linha < 5; linha++) {
        printf("%d", linha = 1);
        for(int coluna = 0; coluna < 5; coluna++) {
            if(tabuleiro[linha][coluna] == -1){
                printf("**");
            }else if(tabuleiro[linha][coluna] == 0){
                printf("0");
            }
        }
    }
    printf("\n");

}
//Imprimindo Tabuleiro.
    printf("Tabuleiro Batalha Naval\n");
    printf(" ");//Espaços para alinhar as colunas.
    
    for(int j = 0; j < 10; j++){
        printf("%c", linha[j]); //Imprimindo numeros das colunas.

    }
    printf("\n");

    for(int i = 0; i < 10; i++){
        printf("%d", i + 0); //Imprimindo numeros das linhas.
        for(int j = 0; j < 10; j++){
            printf("%d", tabuleiro[i][j]); 

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



