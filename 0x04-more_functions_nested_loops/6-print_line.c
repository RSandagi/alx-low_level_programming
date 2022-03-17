#include "main.h"

/**
* print_line - print 0-15  10xand end with new line.
*
* @n:user input of number of line
* Return: 0-15 10x and new line after
*/

void print_line(int n)
{
int c;

c = 0;
while (c < n)
{
_putchar('_');

c++;
}
_putchar('\n');
}
