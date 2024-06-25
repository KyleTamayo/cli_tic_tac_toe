#include <stdio.h>
#include <stdlib.h>

void draw_board(char one, char two, char three,
                char four, char five, char six,
                char seven, char eight, char nine){
    system("clear");
    printf(" %c | %c | %c \n"
           " %c | %c | %c \n"
           " %c | %c | %c \n",
           one, two, three,
           four, five, six,
           seven, eight, nine);
}

int main(void) {
    int running;
    int turn; // 0 = X, 1 = O
    int c;
    char one;
    char two;
    char three;
    char four;
    char five;
    char six;
    char seven;
    char eight;
    char nine;

    one = '1';
    two = '2';
    three = '3';
    four = '4';
    five = '5';
    six = '6';
    seven = '7';
    eight = '8';
    nine = '9';

    running = 1;
    turn = 0;

    while(running){
        printf("Choose Your Position!\n");

        if (turn)
            printf("Player O's Turn!\n");
        else
            printf("Player X's turn!\n");

        draw_board(one, two, three, four, five, six, seven, eight, nine);
        // TODO: Get rid of reading newline, causing second loop
        c = getchar();
        if (c >= '0' && c <= '9' || c == 'q') {
            switch (c) {
                case ('q'):
                    goto exit;
                case ('1'):
                    if (turn)
                        one = 'O';
                    else
                        one = 'X';
                    break;
                case ('2'):
                    if (turn)
                        two = 'O';
                    else
                        two = 'X';
                    break;
                case ('3'):
                    if (turn)
                        three = 'O';
                    else
                        three = 'X';
                    break;
                case ('4'):
                    if (turn)
                        four = 'O';
                    else
                        four = 'X';
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
    exit:
    return 0;
}
