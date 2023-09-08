#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - entry point
 * @ptr: pointer
 * @old_size: input
 * @new_size: input
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *nptr;
unsigned int i;

if (old_size == new_size)
{
return (ptr);
}
if (ptr == NULL)
{
nptr = malloc(new_size);
if (nptr == NULL)
{
return (NULL);
}
}
else
{
if (new_size == 0)
{
free(ptr);
return (NULL);
}
}
if (nptr == NULL)
{
return (NULL);
}
for (i = 0 ; i < new_size && i < old_size ; i++)
{
nptr[i] = ((char *) ptr)[i];
}
free(ptr);
return (nptr);
}
