#include <stdlib.h>
#include <stdio.h>

#include "board_game.h"

void board_game(int T[][3]){
    int i,j;
    printf("-------------\n");

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
        printf("|");
        if(T[i][j]==0)
            printf("   ");
        if(T[i][j]==1)
            printf("X");
        if(T[i][j]==2)
            printf("O");
        }

    printf("|\n-------------\n");

    }
}