#include "stdio.h"
#include "unistd.h"
#include "conio.h"
#include "stdlib.h"

#define or ||
#define and &&

#pragma - par

#pragma startup intro()
//#pragma exit fun_last

int n = 20, i, j, running = 1, score = 0;
int x = 5, y = 5, current_x = 0, current_y = 0;
int fx, fy;
char key_input;

void intro()
{
	puts("welcome to snake world !!! \n enjoy playing .. ");
}

void draw()
{

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == 0 or i == n - 1 or j == n - 1 or j == 0)
			{
				printf("# ");
			}
			else
			{
				if (i == y && j == x)
					printf("$ ");
				else if (i == fy && j == fx)
					printf("@ ");
				else
					printf("  ");
			}
		}
		puts("");
	}
	printf("score = %d\n", score);
	puts("press x to exit from game!!!!!\n");
}

void food_setup()
{

labelx:
	fx = rand() % n; //4 //18467

	if (fx == 0 or fx == n - 1)
		goto labelx;

labely:
	fy = rand() % n;

	if (fy == 0 or fy == n - 1)
		goto labely;
}

int controls()
{

	if (kbhit()) //0 & 1
	{
		key_input = getch();

		switch (key_input)
		{

		case 'H': //up
			current_x = 0;
			current_y = -1;
			break;
		case 'P': //downF
			current_x = 0;
			current_y = 1;
			break;
		case 'K': //left
			current_y = 0;
			current_x = -1;
			break;
		case 'M': //right
			current_y = 0;
			current_x = 1;
			break;
		case 'p': //right
			current_x = 0;
			current_y = 0;
			break;

		case 'x': //to quit the game
			puts("YOU QUIT THE GAME !!!!");
			return 0;
		default:
			break;
		};
	}
	x += current_x;
	y += current_y;

	if (x == 0 or x == n - 1 or y == 0 or y == n - 1)
	{
		puts("You HIT THE WALL!!!! GAME IS OVER ! ");
		return 0;
	}
	else
	{
		if (x == fx and y == fy)
		{
			food_setup();
			score += 10;
		}
	}

	return 1;
}

int main()
{
	food_setup();

	while (running)
	{
		system("cls");

		draw();
		running = controls();

		sleep(0.9);
		// printf("%c" , key_input);
	}

	return 0;
}