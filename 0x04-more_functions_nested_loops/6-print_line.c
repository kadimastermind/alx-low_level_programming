#include "main.h"
/**
 * print_line - prints the character '_'
 * @n: the number of lines to draw
 * Return: void
 */
void print_line(int n)
{
int a;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (a = 0 ; a < n ; a++)
{
_putchar(95);
}
_putchar('\n');
}
}
