#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        printf("Give me a height of pyramida beetween 0 and 23: ");
        height = GetInt();      
    } 
    while ((height <= 0) || (height > 23));
        
    for (int time2print = 0; time2print < height; time2print++)
    {
        for (int spaces = 0; spaces < height-time2print-1; spaces++)
        {
            string x = " ";
            printf("%s", x);
        }
        for (int hashes = 0; hashes < time2print+2; hashes++)
        {
            printf("#");
        }
        printf("\n");
    } 
}

