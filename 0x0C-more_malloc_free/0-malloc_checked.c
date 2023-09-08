#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - entry point
 * @b: input
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
void *c;

c = malloc(b);

if (c == NULL)
{
exit(98);
}
return (c);
}
