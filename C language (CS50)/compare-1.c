#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("Say something: ");
    char* s = GetString();
    
    printf("Some something again: ");
    char* t = GetString();
   
   if (s != NULL && t != NULL) 
   {
        if (strcmp(s, t) == 0)
        {
            printf("You typed the same thing!\n");
        }
        else 
        {
            printf("You typed the diferent things!\n");
        }
    }


}
