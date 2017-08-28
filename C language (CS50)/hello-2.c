#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("welcome to my world, Creator! Please, state your name: ");
    string name = GetString();
    printf("hello, %s\n", name);
}
