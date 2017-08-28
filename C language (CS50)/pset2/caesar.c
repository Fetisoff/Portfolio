#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Nope\n");
        return 1;
    }
    

    
    int k = atoi(argv[1]);
    
    if (k < 0)
    {
        printf("Nope\n");
        return 1; 
    }
    
    string msg = GetString();
    
    for (int i = 0, n = strlen(msg); i < n; i++)
    {
        if (isupper(msg[i]))
           {
                printf("%c", ((((msg[i] + k) - 65) % 26) + 65));
           }
        else if (islower(msg[i]))
            {
                printf("%c", ((((msg[i] + k) - 97) % 26) + 97));
            }        
        else 
            {
                printf("%c", msg[i]);
            }
    }
    printf("\n");
}
