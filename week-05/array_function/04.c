/*
 * Create a representation of a chess board in the form of a two dimensional character array.
 * Each figure should have a character representing it. Empty places should be a single space: ' '.
 *
 * Create a function which sets up the board.
 *
 * Create a function for checking the moves for each of the figurs. They should get coordinates for the figure and where to move it.
 * They should return 0 if the move is acceptable in chess and -1 if not.
 *
 * Create a function which moves figures by getting the initial coordinate and the target coordinate.
 * This should return -1 if the move was not successful and 0 if all is right and if all is right then also move the figure.
 *
 * Determine what kind of arguments You need for the functions. Write them accordingly.
 *
 * For the sake of this exercise it's enough if You write the specific functions for peasants and horse.
 *
 * In the main functions set up the board and try them. Check if they work as intended.
 */
#include <stdio.h>
#include <stdlib.h>
char arry[10][10];
void chessboard();
void board_status();
int mvmnt_check(int s1, int s2, int e1, int e2);
void fgr_mover(int sr, int sc, int er, int ec);

void main()
{
    chessboard();
    while(1){
    int start_row = 1;
    int start_clm = 2;
    int end_row = 3;
    int end_clm = 4;
    scanf("%d %d %d %d", &start_row, &start_clm, &end_row, &end_clm);
    if(mvmnt_check(start_row, start_clm, end_row, end_clm) == 0){
        fgr_mover(start_row, start_clm, end_row, end_clm);
        board_status();
    }
    else
        printf("invalid move\n");
    }
}

void chessboard()
{
    printf("Let's play chess!\n");
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(i % 5 == 1)
                arry[i][j] = 'P';// PAWNS
            else if(i % 7 == 0) {
                if(j % 7 == 0)
                    arry[i][j] = 'R';//ROOKS
                else if(j % 5 == 1)
                    arry[i][j] = 'L';//KNIGHT
                else if(j % 3 == 2)
                    arry[i][j] = 'B';//BISHOP
                else if(j == 3)
                    arry[i][j] = 'Q';//QUEEN
                else
                    arry[i][j] = 'K';//KING
            }else
                arry[i][j] = ' ';
            printf("%c ", arry[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
int mvmnt_check(int sr, int sc, int er, int ec)//starting row, starting coloumn, ending row, ending coloumn
{
        if(arry[sr][sc] == 'P'&& sc == ec && abs(er-sr) < 3 && er > 1 && er < 6){
            return 0;
        } else if(arry[sr][sc] == 'L' && abs(er-sr)+abs(ec-sc) == 3 && sr != er && sc != ec){
            return 0;
        }
    else
        return -1;

}
void board_status()
{
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            printf("%c ", arry[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void fgr_mover(int sr, int sc, int er, int ec)
{
    arry[er][ec] = arry[sr][sc];
    arry[sr][sc] = ' ';

}
