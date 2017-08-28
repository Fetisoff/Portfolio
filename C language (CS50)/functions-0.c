#include <stdio.h>
#include <cs50.h>

void PrintName (string name)
{
    printf("hello, %s\n", name);
}

int main (void)
{
    printf("Yor name: ");
    string s = GetString();
    PrintName(s);
}
