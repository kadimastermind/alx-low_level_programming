#include "main.h"
/**
 *
 *
 *
 *
 */
void print_bi(unsigned int n)
{
if (n == 0)
{
return;
}
print_bi(n >> 1);
if ((n & 1) == 1)
{
_putchar('1');
}
if ((n & 1) == 0)
{
_putchar('0');
}
}
/**
 *
 *
 *
 *
 */
void print_binary(unsigned long int n)
{
if (n == 0)
{
_putchar('0');
}
else
{
print_bi(n);
}
}
