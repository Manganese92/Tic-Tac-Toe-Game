#include <stdio.h>
#include <stdlib.h>

#include "board_game.h"

int main (int argc, char *argv[]) {
    int T[3][3]={{0,0,0,},{0,0,0}};
    int test=1;
    int i, l, c;

    while(test<=9){

        for(i=1; i<2; i++){
            printf("Joueur numero %d:\n",i);
            
            do {
                puts("Donner le numéro de la ligne soit 1,2 ou 3 : ");
            } while (l !=1 && l !=2  && l !=3);

            do {
                puts("Donner le numéro de la colone soit 1,2 ou 3 : ");
            } while (c !=1 && c !=2  && c !=3);

            if (T[l-1][c-1] ==0) {
                T[l-1][c-1]=i;
                test++;
            }else {
                puts("Un autre choix s'il vous plait !!!\n");
            }
        }
    }

return 0;
}