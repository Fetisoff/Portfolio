#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    string s = GetString();
    printf("%c", toupper(s[0]));
    
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] == ' ' && s[i+1] != '\0')
            {
            printf("%c", toupper(s[i+1]));
            }
    }
    printf("\n");
}
