#include "main.h"
/**
 * print_diagonal - print diagonal lines
 * @n: no of inputs
 */
void print_diagonal(int n)
{
int a, b;

for (a = 0 ; a < n ; a++)
{
if (n > 1)
{
for (b = 0 ; b < a ; b++)
{
_putchar(' ');
}
}
_putchar('\\');
_putchar('\n');
}
if (n <= 0)
{
_putchar('\n');
}
}
