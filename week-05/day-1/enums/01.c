/*
 * Take exercise array_function_04.c
 *
 * We're creating an exploration oput of it.
 * Create a program that takes user input,  kinds: 'q' 'w' 'a' 's' 'd'.
 * For 'q' it quits.
 * For 'w' ig oeas up if possible.
 * For 'a' it goes left, for 's' down, for 'd' to the right if possible.
 * Create enums fot these steps.
 *
 * Let the user explore the chess board and write out at each case whether the place is empty
 * or if there is a figure, which one is there.
 * And also, if there is a figure which places it could go to, with the possible targets coordinates.
 */
#include <stdio.h>
#include <stdlib.h>
char arry[9][9];
char background[9][9];
int cursor[2] = {4,5};
void board();
void chessboard();
void board_status();
void move(int i, int j);
char ch;


void fgr_mover(int sr, int sc, int er, int ec);
enum moves{UP = 1, DOWN = -1, LEFT = 1, RIGHT = -1};

void main()
{
    system("clear");
    board();


    while(1) {
    ch = getchar();
    system("clear");
    board_status();
    switch(ch){
        case 'w':
            move(UP, 0);
            break;
        case 's':
            move(DOWN, 0);
            break;
        case 'a':
            move(0, LEFT);
            break;
        case 'd':
            move(0, RIGHT);
            break;
        default:
            break;
    }
    }
}

void board(){
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            if(i == 0)
                arry[i][j] = j + 64;
            else if(j == 0)
                arry[i][j] = i + 48;
            else{
                if ((i + j) % 2 == 0)
                    arry[i][j] = 'X';
                else
                    arry[i][j] = ' ';
            }
            arry[4][5] = 'O';

            printf("%c ", arry[i][j]);
        }
        printf("\n");
    }
    printf("\n");

}

void chessboard()
{
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            if(i == 0){
                arry[i][j] = j + 48;
            } else if(j == 0){
                arry[i][j] = i + 48;
            } else if(i % 5 == 2){
                arry[i][j] = 'P';// PAWNS
            } else if(i % 7 == 1) {
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
            } else{
                if ((i + j) % 2 == 0)
                    arry[i][j] = 'X';
                else
                    arry[i][j] = ' ';
            }
            arry[4][5] = 'O';

            printf("%c ", arry[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void board_status()
{
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
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
void move(int i, int j) {
    if(1){
        arry[cursor[0] - i][cursor[1] - j] = arry[cursor[0]][cursor[1]];

        if ((cursor[0] + cursor[1]) % 2 == 0)
            arry[cursor[0]][cursor[1]] = 'X';
        else
            arry[cursor[0]][cursor[1]] = ' ';


        cursor[0] -= i;
        cursor[1] -= j;

    }
    else{
        printf("moement not possible\n");
    }
}
