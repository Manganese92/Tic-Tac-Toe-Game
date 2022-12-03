#include <stdio.h>
#include <stdlib.h>


void printBoard();
int square[3][3];


int main (int argc, char* argv[]) {

    int i, j;

    // Reset the array
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            square[i][j] = 0;
        }
    }

    printBoard();

return 0;    
}



void printBoard() {
    int i, j ;

    for (i=0; i<3; i++) {
        printf("        |       |       \n");
        for(j=0; j<3; j++) {
            // square =1 -> X
            if (square[i][j] ==1) {
                printf("    X   ");
            }
             if (square[i][j] ==0) {
                printf("        ");
            }
             if (square[i][j] ==-1) {
                printf("    O   ");
            }
            // We want to add a line between the columns
            if (j != 2) {
                printf("|");
            }
        }
        // We want to add a line between the lines
        if (i !=2){
            printf("\n______|_______|_______");  
        } else {
            printf("\n      |       |       ");
        }
    }
}
    