#include <stdio.h>
#include <stdlib.h>
/**
* main - Prints the alphabets without q and e
*
* Return: Always 0 (Success)
*/
int main(void)
{
for(char ch = 'a'; ch <= 'z'; ch ++)
{
if(ch == 'e'|| ch == 'q')
{
ch++
putchar(ch);
}
}
putchar('\n');
return(0);
}
