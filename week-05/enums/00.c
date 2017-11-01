/*
 * Take exercise array_function_04.c
 *
 * Create an enum for each figure.
 * Create a function that returns the enum value for the figure at a given cooridnate on the board.
 *
 * Rewrite the exercise using these enums.
 *
 * HINT: this may be the case to use switch-case :)
 */

#include <stdio.h>
#include <stdlib.h>
char arry[10][10];
void chessboard();

enum figures {PAWN = 49, ROOK, KNIGHT, BISHOP, QUEEN, KING};

void main()
{
    chessboard();
}

void chessboard()
{
    printf("Let's play chess!\n");
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(i % 5 == 1)
                arry[i][j] = PAWN;
            else if(i % 7 == 0) {
                if(j % 7 == 0)
                    arry[i][j] = ROOK;
                else if(j % 5 == 1)
                    arry[i][j] = KNIGHT;
                else if(j % 3 == 2)
                    arry[i][j] = BISHOP;
                else if(j == 3)
                    arry[i][j] = QUEEN;
                else
                    arry[i][j] = KING;
            }else{
                if ((i + j) % 2 == 0)
                    arry[i][j] = 'X';
                else
                    arry[i][j] = ' ';

            }
            printf("%c ", arry[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
