#include <stdio.h>
#include <stdlib.h>

int matriz[3][3] = {
    {1, 3, 4},
    {2, 7, 1},
    {1, 2, 3}
};

int matriz2 [3][3] = {
    {-1, -3, -4},
    {-2, -7, -1},
    {-1, -2, -3}
};

int main() {
    
    //DEFINIR TAMANHOS
    int numColunas = sizeof(matriz[0]) / sizeof(matriz[0][0]);
    int numLinhas = sizeof(matriz) / sizeof(matriz[0]);
    int numColunas2 = sizeof(matriz2[0]) / sizeof(matriz2[0][0]);
    int numLinhas2 = sizeof(matriz2) / sizeof(matriz2[0]);
    
    //VERIFICAR TAMANHO
    if(numColunas == numColunas2 && numLinhas == numLinhas2) {
        for(int i = 0; i < numLinhas; i++) {
            for(int j = 0; j < numColunas; j++) {
                if(matriz[i][j] == matriz2[i][j] * - 1) {
                    
                }
                else {
                    printf("As matrizes não são opostas");
                    return 0;
                }
            }
        }
    }
    else {
        printf("As matrizes não são opostas");
    }
    printf("As matrizes são opostas");
}
