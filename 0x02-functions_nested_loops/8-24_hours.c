#include "main.h"
/**
 *
 *
 */
void jack_bauer(void)
{
int a, b, c, d;
for (a = 0 ; a < 3 ; a++)
{
for (b =0 ; b < 10 ; b++)
{
if ((a <= 1 && b <= 9) || (a <= 2 && b <= 3))
{
for (c = 0 ; c < 6 ; c++)
{
for (d = 0 ; d < 10 ; d++)
{
_putchar(a + '0');
_putchar(b + '0');
_putchar(58);
_putchar(c + '0');
_putchar(d + '0');
}
}
}
}
}
}
