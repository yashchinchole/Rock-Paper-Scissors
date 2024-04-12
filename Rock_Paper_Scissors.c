#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int rps(char you, char comp)
{
    // returns => 1 if you win, -1 if you lose & 0 if draw

    // Draw Condition
    if (you == comp)
        return 0;

    // Non Draw Condition
    if (you == 'r' && comp == 's')
        return 1;
    else if (you == 's' && comp == 'r')
        return -1;

    if (you == 'p' && comp == 'r')
        return 1;
    else if (you == 'r' && comp == 'p')
        return -1;

    if (you == 's' && comp == 'p')
        return 1;
    else if (you == 'p' && comp == 's')
        return -1;
}

int main()
{
    char you, comp;
    srand(time(0));
    int num = rand() % 100 + 1;

    if (num < 33)
        comp = 'r';
    else if (num > 33 && num < 66)
        comp = 'p';
    else
        comp = 's';

    system("cls");

    printf("\n\nEnter ->  'r' for ROCK  ***  'p' for PAPER  ***  's' for SCISSOR\n\n");
    scanf("%c", &you);

    int result = rps(you, comp);

    if (result == 0)
        printf("\nGAME DRAW\n\n");

    else if (result == 1)
        printf("\nYOU WIN\n\n");
    else
        printf("\nYOU LOSE\n\n");

    printf("\nYOU chose %c & COMP chose %c\n\n\n\n\n\n\n\n", you, comp);

    return 0;
}