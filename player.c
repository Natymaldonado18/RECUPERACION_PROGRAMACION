#include <stdio.h>
#include "maze.h"
#include "player.h"


int contadormovimientos;
int posx;
int posy; 

void variablesxy () {
int contadormovimientos=0;
int posx;
int posy; 
}

void jugardenuevo() {
    imprimirmatriz();
    variablesxy();
 
    while (!proceso()) {
        char movimiento;
        printf("numero de movimientos usados: %d\n", contadormovimientos);
        printf("Escriba una posicion en mayuscula: A,S,D,W \n");
        scanf(" %c", &movimiento); 
        switch (movimiento) {
            case 'A':
                if (validaciondemovimiento(posx, posy-1)){
                 posy--;
                 contadormovimientos++;}
                else{
                    printf("Movimiento invalido\n");
                    contadormovimientos++;
                }
                break;
            case 'S':
                 if (validaciondemovimiento(posx+1, posy)){
                 posx++;
                 contadormovimientos++;}
                else{
                    printf("Movimiento invalido\n");
                    contadormovimientos++;
                }
                break;
            case 'D':
                 if (validaciondemovimiento(posx ,posy+1)){
                 posy++;
                 contadormovimientos++;}
                else{
                    printf("Movimiento invalido\n");
                    contadormovimientos++;
                }
                break;
            case 'W':
                 if (validaciondemovimiento(posx-1, posy)){
                posx--;
                contadormovimientos++;}
                else{
                    printf("Movimiento invalido\n");
                    contadormovimientos++;
                }
                break;
            default:
                printf("Escriba una opcion correcta\n");
        }
        printf("\n");
        imprimirmatriz();
    }
    printf("ACABA DE GANAR!\n");
    printf("numero de movimientos usados: %d\n", contadormovimientos);
    rangos();
}


int proceso(){
if (posx==4 &&posy==4)
     return 1;
 else {
     return 0;
}
}

int rangos(){
printf("De acuerdo a su número de movimientos:\n");
  if (contadormovimientos <= 8) {
        printf("¡Qué bien juega! ¡Es un pro!\n");
    } else if (contadormovimientos <= 15) {
        printf("Es un novato\n");
    } else {
        printf("¡Es un noob!\n");
    }

}