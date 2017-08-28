#include <stdio.h>
#include <cs50.h>

int main(void)
{
        
        printf("Please give me an int beetween 1 and 10:");
        int n = GetInt();
    
        if (n >= 1 && n < 5)
        {
            printf("You picked a small int!\n");
        }
        else if (n >= 5 && n < 8)
        {
            printf("You picked a edium int!\n");
        }
        else if (n >= 8 && n <= 10)
        {
            printf("You picked a large int\n");
        }
        else
        {
            printf("You picked a invalid int!\n");
        }
}
