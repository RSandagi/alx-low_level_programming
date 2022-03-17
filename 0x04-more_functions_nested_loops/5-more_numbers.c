#include "main.h"

/**
* more_numbers - print 0-15  10xand end with new line.
* Return: 0-15 10x and new line after
*/
void more_numbers(void)
{

int c, i;

c = 0;
while (c < 10)
{
i = 0;
while (i < 15)
{
if (i > 9)
_putchar(i / 10 + '0');

_putchar(i % 10 + '0');
i++;
}
c++;
_putchar('\n');
}
}
