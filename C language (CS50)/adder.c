#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("My Lord, give me an int: ");
    int x = GetInt();
    
    printf("give me anothe int: ");
    int y = GetInt();
    
    printf("the sum of %i and %i is %i.\n", x, y, x + y);
}
