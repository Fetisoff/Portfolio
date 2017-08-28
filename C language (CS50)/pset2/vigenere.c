#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    //validation check
    if (argc != 2)
    {
        printf("Nope\n");
        return 1;
    }
    
    string key = argv[1];
    
    //capitalize the key to same 
    for (int i = 0, n = strlen(key); i < n; i++)
    {
        key[i] = toupper(key[i]);
    }
    
    int keylenght = strlen(key);
    string msg;
    
    for (int i = 0, n = strlen(key); i < n; i++)
    {
        if (!isalpha(key[i]))
            {
                printf("Nope\n");
                return 1;
            }
    }
    
    //take message
    do
    {
         msg = GetString();
    }
    while (strlen(msg) == 0);
    
    
    //encrypting
    for (int i = 0, k = 0, n = strlen(msg); i < n; i++)
    {
            if (isalpha(msg[i]))
            {
                if (isupper(msg[i]))
                {
                    msg[i] = (((msg[i] - 65) + (key[k++ % keylenght] - 65)) % 26 + 65);
                }
                else if (islower(msg[i]))
                {
                    msg[i] = (((msg[i] - 97) + (key[k++ % keylenght] - 65)) % 26 + 97);
                }        
            }
    }
    printf("%s\n", msg);
}
