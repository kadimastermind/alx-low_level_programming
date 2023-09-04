#include "main.h"
#include <stdlib.h>
/**
 * str_concat - entry point
 * @s1: input
 * @s2: input
 * Return: pointer to result
 */
char *str_concat(char *s1, char *s2)
{
char *s;
int 0, j = 0, k, l;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[i])
{
i++;
}
while (s2[j])
{
j++;
}
l = i + j;
s = malloc((sizeof(char) * l) +1);
if (s == NULL)
{
return (NULL);
}
while (k < l)
{
if (k <= i)
{
s[k] = s1[k];
}
if (k >= i)
{
s[k] = s2[j];
j++;
}
k++;
}
s[k] = '\0';
return (s);
}
