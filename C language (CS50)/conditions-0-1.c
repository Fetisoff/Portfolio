#include <stdio.h>
#include <cs50.h>

int main(void)
{
        
        printf("Please give me an int:");
        int n = GetInt();
    
        if (n > 0)
        {
            printf("You picked a positive number!\n");
        }
        else if (n < 0)
        {
            printf("You picked a negative number!\n");
        }
        else 
        {
            printf("You picked a zero!\n");
        }
}
