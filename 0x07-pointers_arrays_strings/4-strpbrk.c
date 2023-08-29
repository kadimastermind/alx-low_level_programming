#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - entry point
 * @s: character to be traced
 * @accept: input
 * Return: NULL or s
 */
char *_strpbrk(char *s, char *accept)
{
int a, b;

for (a = 0 ; s[a] != '\0' ; a++)
{
for (b = 0 ; accept[b] != '\0' ; b++)
{
if (s[a] == accept[b])
{
return (s + a);
}
}
}
return (NULL);
}
