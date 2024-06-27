#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

void draw_board(char board[SIZE][SIZE]){
    int i;
    int j;
    system("clear");

    for (i = 0; i < SIZE; i++){
        for (j = 0; j < SIZE; j++){
            printf("| %c |", board[i][j]);
        }
        printf("\n");
    }

}

int main(void) {
    int running;
    int turn; // 0 = X, 1 = O
    int c;
    char board[SIZE][SIZE] = {{'1','2','3'},
                        {'4','5','6'},
                        {'7','8','9'}};

    running = 1;
    turn = 0;

    while(running){
        if(board[0][0] == board[0][1] == board[0][2])
        {
            printf("Winner! %c Wins!", board[0][0]);
            return 0;
        }
        if (c == '\n')
            goto skip;
        printf("Choose Your Position!\n");

        if (turn)
            printf("Player O's Turn!\n");
        else
            printf("Player X's turn!\n");

        draw_board(board);
        skip:
        c = getchar();
        if (c >= '0' && c <= '9' || c == 'q') {
            switch (c) {
                case ('q'):
                    return 0;
                case ('1'):
                    if (turn)
                        board[0][0] = 'O';
                    else
                        board[0][0] = 'X';
                    break;
                case ('2'):
                    if (turn)
                        board[0][1] = 'O';
                    else
                        board[0][1] = 'X';
                    break;
                case ('3'):
                    if (turn)
                        board[0][2] = 'O';
                    else
                        board[0][2] = 'X';
                    break;
                case ('4'):
                    if (turn)
                        board[1][0] = 'O';
                    else
                        board[1][0] = 'X';
                    break;
                case ('5'):
                    if(turn)
                        board[1][1] = 'O';
                    else
                        board[1][1] = 'X';
                case('6'):
                    if(turn)
                        board[1][2] = 'O';
                    else
                        board[1][2] = 'X';
                    break;
                case('7'):
                    if(turn)
                        board[2][0] = 'O';
                    else
                        board[2][0] = 'X';
                    break;
                case('8'):
                    if(turn)
                        board[2][1] = 'O';
                    else
                        board[2][1] = 'X';
                    break;
                case('9'):
                    if(turn)
                        board[2][2] = 'O';
                    else
                        board[2][2] = 'X';
                    break;
                default:
                    break;
            }

            if (turn == 1)
                turn = 0;
            else
                turn = 1;
        }
    }
    return 0;
}
