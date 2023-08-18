#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// #pragma warn -rch -pu
#define or ||

void intro(char *p1, char *p2)
{
    printf("Welcome to vk TIC TAC TOE Game !!!\n\n");

    printf("enter name of player X : ");
    gets(p1);

    printf("enter name of player O : ");
    gets(p2);

    printf("-> %s is X\n-> %s is O\n\n", p1, p2);
}

void print_board(char board[9])
{
    for (int i = 1; i <= 9; i++)
    {
        printf("| %c | ", board[i - 1]);
        if (i % 3 == 0)
            puts("");
    }
}

int check_winner(char board[9], char turn)
{
    if (
        (board[0] == board[1]  && board[1] ==  board[2] && board[0] == turn) or
        (board[3] == board[4]  && board[3] == board[5] && board[3] == turn ) or
        (board[6] == board[7]  && board[6] == board[8] && board[6] == turn) or

        (board[0] == board[3] && board[0] == board[7] && board[0] == turn) or
        (board[1] == board[6] && board[1] == board[7] && board[1] == turn) or
        (board[2] == board[5] && board[2] == board[8] && board[2]  == turn) or

        (board[0] == board[4] && board[0] == board[8] && board[0] == turn ) or
        (board[2] == board[4] && board[2] == board[6] && board[2]== turn)
        )
    {
        return 1;
    }
    return 0;
}

int main()
{
    char cont;
    char board[9], p1[20], p2[20], turn = 'X', p[20];
    int i, move, winner;
    intro(p1, p2);
    strcpy(p, p1);

    do
    {
        puts("GAME IS START \nenter box pos number to enter your player postion :\n");

        for (i = 1; i <= 9; i++)
        {
            printf("| %d | ", i);

            if (i % 3 == 0)
                puts("");
            board[i - 1] = ' ';
        }

        i = 0;
        while (i < 9)
        {

            printf("player %s move [%c] : ", p, turn);
            scanf("%d", &move);

            if ( ( 1<=  move <= 9) && board[move-1] == ' ')
            {
                board[move - 1] = turn;

                print_board(board);

                winner = check_winner(board, turn);

                if (winner)
                {
                    printf("\nCongratulation %s !! You win the game", p);
                    break;
                };

                if (turn == 'X')
                {
                    turn = 'O';
                    strcpy(p, p2);
                }
                else
                {
                    turn = 'X';
                    strcpy(p, p1);
                };
                i++;
            }
            else
            {
                puts("Not a vaid move .. try again!!!!!!");
            };
        }

        printf("\n");

        if (!winner)
        {
            puts("game is draw !!! No one win ");
        }

        fflush(stdin);

        printf("\ncontinue playing or not (y\\n) : ");

        cont = getchar();

        system("cls");

    } while (cont == 'y');

    printf("Thank YOU For Playing !!");

    return 0;
};
