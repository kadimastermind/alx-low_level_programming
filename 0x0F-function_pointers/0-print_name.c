#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - entry point
 * @name: input
 * @f: pointer to function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
f(name);
}
}

