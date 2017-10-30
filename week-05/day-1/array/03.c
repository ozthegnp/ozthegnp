/*
 * Create a 2 dimensonal array of characters. 8x8
 * Fill the array with X and space alternating.
 * Print it out row by row. (It should resemble a chess board)
 * Designate a character for each chess peace. (Queen could be Q, King could be K, etc.)
 * Set up the start of a game.
 * Print it out again.
 * Make one move with a horse.
 * Print it again.
 */

#include <stdio.h>
#include <stdlib.h>

void main()
{
    //CHESSBOARD
    printf("CHESSBOARD\n");

    char arry[8][8];

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if((i + j) % 2 == 0)
                arry[i][j] = 'X';
            else
                arry[i][j] = ' ';
            printf("%c ", arry[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //GAME SETUP
    printf("GAME SETUP\n");
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(i % 5 == 1)
                arry[i][j] = 'A';// PAWNS
            else if(i % 7 == 0) {
                if(j % 7 == 0)
                    arry[i][j] = 'R';//ROOKS
                else if(j % 5 == 1)
                    arry[i][j] = 'K';//KNIGHT
                else if(j % 3 == 2)
                    arry[i][j] = 'B';//BISHOP
                else if(j == 3)
                    arry[i][j] = 'Q';//QUEEN
                else
                    arry[i][j] = 'K';//KING
            }
            printf("%c ", arry[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //KNIGHT MOVEMENT FROM 8B to 6C
    printf("KNIGHT MOVEMENT FROM 8B to 6C\n");
    arry[5][2] = 'K';
    arry[7][1] = 'X';
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            printf("%c ", arry[i][j]);
        }
        printf("\n");
    }
}
