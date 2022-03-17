#include "main.h"

/**
* print_diagonal - print diagonal line based on input.
*
* @n:user input of number of line
* Return: 0-15 10x and new line after
*/

void print_diagonal(int n)
{
int c, i;

c = 0;

while (n > 0)
{
i = c;
while (i > 0)
{
_putchar(' ');
i--;
}
_putchar('\\');
_putchar('\n');
c++;
n--;
}
if (c < 1)
_putchar('\n');
}
