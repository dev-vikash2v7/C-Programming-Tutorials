#include <stdio.h>

int main()
{
    int i = 7, num = 51, win = 0, guess, count = 0;
    puts("welcome to the  NUMBER GUESSING GAME \n ");
    printf("you have only %d chance to guess the number !!\n", i);
    do
    {
        printf("guess the number : ");
        scanf("%d", &guess);

        if (num == guess)
        {
            count++;
            break;
        }
        else if (guess < num)
        {
            printf("your guess is lower than the number\n");
        }
        else
        {
            printf("your guess is greate than the number\n");
        };

        printf("you have %d more chance left\n\n", --i);
        count++;

    } while ( i != 0);

    win ? printf("congrats you win the game in %d moves", count) : printf("sorry you lose the game");

                                                                       return 0;
}