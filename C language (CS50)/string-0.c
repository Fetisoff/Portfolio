#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main (void)
{
    string s = GetString();
    
    if (s != NULL)
    {
        for (int n = 0, m = strlen(s); n < m; n++)
        {
            printf("%c\n", s[n]); 
        }
    }
}
