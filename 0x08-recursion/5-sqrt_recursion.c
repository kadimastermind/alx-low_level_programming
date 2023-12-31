#include "main.h"
/**
 * _sqrt_recursion - entry point
 * @n: input
 * @i: input
 * Return: squareroot
 */
int actual_sqrt_recursion(int n, int i);
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (actual_sqrt_recursion(n, 0));
}

/**
 *  actual_sqrt_recursion - finds actual squareroot
 *  @n: number to calculate sqrt
 *  @i: iterator
 *  Return: squareroot
 */

int actual_sqrt_recursion(int n, int i)
{
if (i * i > n)
{
return (-1);
}
if (i * i == n)
{
return (i);
}
return (actual_sqrt_recursion(n, i + 1));
}
