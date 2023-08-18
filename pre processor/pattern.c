#include <stdio.h>
#include <windows.h>

#define Hline                        \
    {                                \
        for (int i = 0; i < 79; i++) \
            printf("%c", 196);       \
    }

#define Vline(x, y)        \
    {                      \
        goto_xy(x, y);     \
        printf("%c", 179); \
    }

void goto_xy(int col, int row)
{
    HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos = {col, row};
    SetConsoleCursorPosition(hStdout, pos);
}
int main()
{
    system("cls");
    goto_xy(1, 12);

    Hline;

    for (int y = 1; y < 25; y++)
        Vline(39, y);
    return 0;
}