#include <stdio.h>
#include <stdlib.h>
/**
* main- Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
    for(char ch= 'a'; ch <= 'z'; ch ++)
    {
        if(ch != 'e' && ch != 'q')
        {
            putchar(ch);
        }
    }
    putchar('\n');
    return 0;
}
