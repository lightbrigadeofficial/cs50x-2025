#include <cs50.h>
#include <stdio.h>

void print_row(int spaces, int bricks_left, int gaps, int bricks_right);

int main(void)
{
    int gaps = 0;
    int height;

    // prompt the usr for height input in the range of 1-8 inclusive
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // print the pyramid with desired height and calculated gaps
    for (int i = 1; i <= height; i++)
        print_row(height - i, i, gaps, i);
}

void print_row(int spaces, int bricks_left, int gaps, int bricks_right)
{
    // the spaces
    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }

    // the left pyramid bricks
    for (int i = 0; i < bricks_left; i++)
    {
        printf("#");
    }

    // the gaps
    for (int i = 0; i == 0; i++)
    {
        printf("  ");
    }

    // the right pyramid bricks
    for (int i = 0; i < bricks_right; i++)
    {
        printf("#");
    }
    printf("\n");
}
