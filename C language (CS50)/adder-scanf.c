#include <stdio.h>
#include <cs50.h>

int main()
{
    int x, y;
    printf("My Lord, give me an int: ");
    scanf("%d", &x);    
    printf("give me anothe int: ");
    scanf("%d", &y);    
        
    printf("the sum of %d and %d is %d.\n", x, y, x + y);
    return 0;
}
