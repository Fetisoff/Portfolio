#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float given;
    int x;
    int count = 0;
    // asking about money
    do
    {
        printf("You give me: ");
        given = GetFloat();      
    } 
    while (given <= 0); //check positive number
    
    x =  round(given*100); //from 9.70 to 
      
    while(x >= 25)
    {
        x = x - 25;
        count++;
    }
    
    while((x >= 10) && (x < 25))
    {
        x = x - 10;
        count++;
    }
    while((x >= 5) && (x < 10))
    {
        x = x - 5;
        count++;
    }
    while((x >= 1) && (x < 5))
    {
        x = x - 1;
        count++;
    }
    printf("%i\n", count);
}
