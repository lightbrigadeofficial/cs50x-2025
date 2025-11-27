#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // prompt the usr's name
    string name = get_string("What's your name? ");

    // print a greeting to the usr
    printf("hello, %s\n", name);
}
