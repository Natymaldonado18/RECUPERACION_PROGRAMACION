#include <stdio.h>
#include "maze.h"
#include "player.h"


int main  (){
    int opc;
    do{
    printf("++++++++++++++++++++++++++++++++++++++++++\n");
    printf("\n");
    printf("BIENVENIDO AL JUEGO DEL LAVBERINTO BINARIO\n");
    printf("Escoja una opcion\n");
    printf ("1.- Jugar de nuevo\n");
    printf ("2.- Creditos\n");
    printf ("3.- Salir\n");
    printf("++++++++++++++++++++++++++++++++++++++++++\n");
    scanf ("%d", & opc);

    switch (opc) {
        case 1:
         jugardenuevo();
          break;

        case 2: 
           printf("creditos\n");
           printf("Nombre: Nathalia Maldonado\n");
           printf("ID BANNER: A00097575\n");
           break; 

        case 3:
         printf("Saliendo del programa\n");
        break;
        default:
        printf("La opcion no es valida\n");
    }
}  while (opc != 3);
}