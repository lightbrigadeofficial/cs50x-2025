#include <cs50.h>
#include <stdio.h>

void print_row(int spaces, int bricks); // prototype

int main(void)
{
    // prompt the ussr for pyramid's height in the range of 1-8 inclusive
    int height; // declaring an var data-type
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);
    // print pyramid of desired height
    for (int i = 1; i <= height; i++)
    {
        print_row(height - i, i);
    }
}

void print_row(int spaces, int bricks)
{
    // print spaces
    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }
    // print bricks
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
    // take the cursor to next line
    printf("\n");
}
