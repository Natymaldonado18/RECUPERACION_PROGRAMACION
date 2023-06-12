#include "player.h"
#include "stdio.h"
#include "maze.h"

//defincion del laberinto . imprimir.comprabar si el movimiento es valido

int maze [5] [5] ={
{0 , 1 , 0 , 0 , 0 },
{0 , 1 , 1 , 1 , 0 },
{0 , 0 , 0 , 0 , 0 },
{0 , 1 , 0 , 1 , 0 },
{1 , 0 , 0 , 1 , 0 },
};

void imprimirmatriz() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == posx && j == posy) {
                printf(" *");
            } else if (maze[i][j] == 0) {
                printf(" 0");
            } else {
                printf(" 1");
            }
        }
        printf("\n");
    }
}

int validaciondemovimiento(int filas, int columnas) {
    if (filas >= 0 && filas < 5 && columnas >= 0 && columnas < 5 && maze[filas][columnas] == 0) {
        return 1;
    } else 
        return 0;
    }

