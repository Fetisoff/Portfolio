#include <cs50.h>
#include <stdio.h>

int GetPositive(void);

int main(void)
{
    int n = GetPositive();
    printf("Thanks for %i!\n", n);
}

int GetPositive(void)
{
    int n;
    do
    {
        printf("Please, give a positive int: ");
        n = GetInt();
    }
    while (n < 1);
    return n;
}
