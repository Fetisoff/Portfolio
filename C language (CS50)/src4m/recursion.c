#include <stdio.h>
#include <cs50.h>

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
        return n + sum(n - 1);
}
