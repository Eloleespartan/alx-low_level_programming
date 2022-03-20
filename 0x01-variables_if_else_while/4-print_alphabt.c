#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* main - Prints the alphabet without q and e
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
for(i = 97; i < 123; i++)
{
if(i != 101 && i != 113)
{
<<<<<<< HEAD
putchar(i);
}
}
putchar('\n');
return (0);
}
=======
ch++
putchar(ch);
}
}
putchar('\n');
return(0);
}
>>>>>>> 5044b806d4f0dad8714fbf8f7a015240d9c2bcf8
