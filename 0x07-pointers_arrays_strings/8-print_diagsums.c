#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - entry point
 * @a: input
 * @size: input
 */
void print_diagsums(int *a, int size)
{
int i, sum1, sum2;

for (i = 0 ; i < size ; i++)
{
sum1 += a[i];
a += size;
}

a -= size;
for (i = 0 ; i < size ; i++)
{
sum2 += a[i];
a -= size;
}
printf("%d, %d\n", sum1, sum2);
}
