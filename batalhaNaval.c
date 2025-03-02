#include <stdio.h>
#define linhas 7
#define colunas 7
#define LINHAS 10
#define COLUNAS 10

int main(){

//cone

int cone[linhas][colunas] = {
    {0, 0, 0, 1, 0, 0, 0},
    {0, 0, 1, 1, 1, 0, 0},
    {0, 1, 1, 1, 1, 1, 0},
    {1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1}
};

// mostrar o cone

for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
        if (cone[i][j] == 1)
            printf("1"); 
        else
            printf("0");  
    }
    printf("\n");
}

    printf("\n");

//cruz

int cruz[linhas][colunas] = {
    {0, 0, 0, 1, 0, 0, 0},
    {0, 0, 0, 1, 0, 0, 0},
    {0, 0, 0, 1, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 1, 0, 0, 0},
    {0, 0, 0, 1, 0, 0, 0},
    {0, 0, 0, 1, 0, 0, 0}
};

//mostrar a cruz

for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
        if (cruz[i][j] == 1)
            printf("1");
        else
            printf("0"); 
    }
    printf("\n");
}

    printf("\n");

//octaedro
 
    int octaedro1[linhas][colunas] = {
        {0, 0, 0, 1, 0, 0, 0},
        {0, 0, 1, 1, 1, 0, 0},
        {0, 1, 1, 1, 1, 1, 0},
        {1, 1, 1, 1, 1, 1, 1},
        {0, 1, 1, 1, 1, 1, 0},
        {0, 0, 1, 1, 1, 0, 0},
        {0, 0, 0, 1, 0, 0, 0}
    };

// mostrar o octaedro

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (octaedro1[i][j] == 1)
                printf("1");  
            else
                printf("0");
        }
        printf("\n");
    }

// tabuleiro 10x10

    int tabuleiro2[LINHAS][COLUNAS] = {0};// (0) agua

    //(3)navio

    tabuleiro2[1][2] = 3;// horizontal 
    tabuleiro2[1][3] = 3;
    tabuleiro2[1][4] = 3;

    tabuleiro2[5][2] = 3;//vertical
    tabuleiro2[6][2] = 3;
    tabuleiro2[7][2] = 3;

    tabuleiro2[0][9] = 3;//diagonal
    tabuleiro2[1][8] = 3;
    tabuleiro2[2][7] = 3;

    tabuleiro2[7][5] = 3;//diagonal
    tabuleiro2[8][6] = 3;
    tabuleiro2[9][7] = 3;

    // areas afetadas pela habilidade

    tabuleiro2[2][1] = 5; //(5)ataque
    tabuleiro2[7][4] = 5;
    tabuleiro2[9][8] = 5;

    printf("Tabuleiro antes do ataque:\n\n");

    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            if (tabuleiro2[i][j] == 3)
                printf("3");  
            else
                printf("0");
        }
        printf("\n");
    }
    printf("\n");

    printf("Tabuleiro depois do ataque:\n\n");

    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            if (tabuleiro2[i][j] == 3)
                printf("3");  
            else if (tabuleiro2[i][j] == 5)
                printf("5");
            else
                printf("0");
            
        }
        printf("\n");
    }

return 0;

}

