#include <cs50.h>
#include <stdio.h>
#include "helpers.h"

int main(int argc, string values[])
{
    
    if (argc < 1)
        printf("Nope\n");
                
    for (int k = 0; k < n - 1; k++)
    {
        int swaps = 0;
        
        for (int i = 0; i < n - 1 - k; i++)
        {
            if (values[i] > values[i+1])
            {
                int temp = values[i+1];
                values[i+1] = values[i];
                values[i] = temp;
                
                swaps++;
            }
        }
        if (!swaps)
            break;
    }
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d\n", values[i]);
    }
}
