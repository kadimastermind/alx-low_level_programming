#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - entry point
 * @width: input
 * @height: input
 * Return: pointer to the array
 */
int **alloc_grid(int width, int height)
{
int **i, l, k, z;

z = l * z;
if (z <= 0)
{
return (NULL);
}

if (i == NULL)
{
return (NULL);
}
i = malloc((sizeof(int)) * width);
for (l = 0 ; l < width ; l++)
{
i[l] = malloc((sizeof(int)) * height);
if (i[l] ==  NULL)
{
for (i-- ; i >= 0 ; i--)
{
free(i[l]);
}
free(i);
return (NULL);
}
}
for (l = 0 ; l < width ; l++)
{
for (l = 0 ; k < height ; k++)
{
i[l][k];
}
}
return (i);
}