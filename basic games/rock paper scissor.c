#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROCK 0
#define PAPER 1
#define SCISSOR 2

#define and &&
#define or ||

// srand(time(NULL)); //sequence random number generate

int generatePlayerMove()
{
    int n;
    printf("\n1.ROCK\n2.PAPER\n3.SCISSOR\nwhat you want : ");
    scanf("%d", &n);
    n--;
    puts("");

    if (0 <= n <= 2)
    {
        return n;
    }
    else
    {
        printf("not valid move !!\n try again\n");
        generatePlayerMove();
    }

}

int main()
{
    unsigned end = 0, comp_move, player_move, comp_points = 0, player_points = 0;
    char p[10] = "vikash";

    printf("enter your name : ");
    scanf("%s", p);

    for (int i = 0; i < 5; i++)
    {
        player_move = generatePlayerMove();
        comp_move = rand() % 3; //0 , 1 , 2

        switch (player_move)
        {
        case ROCK:
            puts("you are rock");
            break;
        case PAPER:
            puts("you are paper");
            break;
        case SCISSOR:
            puts("you are scissor");
            break;
        };

        switch (comp_move)
        {
        case ROCK:
            puts("computer is rock");
            break;
        case PAPER:
            puts("computer is paper");
            break;
        case SCISSOR:
            puts("computer is scissor");
            break;
        };

    if (player_move == comp_move)
    {
        puts("\ndraw!!");
    }
    else if (
        (player_move == ROCK && comp_move == SCISSOR) ||
        (player_move == SCISSOR && comp_move == PAPER) ||
        (player_move == PAPER && comp_move == ROCK))
    {
        puts("\ncongrats!! you get point");
        player_points++;
    }
    else
    {
        puts("\nsorry!! you lose ");
        comp_points++;
    };

    printf("\ncomputer points : %d\n%s points : %d\n", comp_points, p, player_points);

for(int i=0 ; i < 100 ; i++ ){
    printf("%c" , 196);
}
    };
    system("cls");

        puts("");
    if(comp_points < player_points ){
        printf("congrats !! you win the game by %u lead" , player_points-comp_points);
    }

    else if(comp_points > player_points ){
        printf("sorry !! you lose the game by %u points" , player_points-comp_points);
    }
    else{
        printf("its a draw !! both have %u points " , comp_points);
    }

    return 0;
}