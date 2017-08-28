#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>



void swap(int* a, int* b);

int main(void)
{
    int x = 1, y = 2;
    printf("x is %i\n", x);
    printf("y is %i\n", y);
    
    printf("swaping...\n");
    swap(&x, &y);
    printf("x is %i\n", x);
    printf("y is %i\n", y);
}

void swap(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
    return;
}

