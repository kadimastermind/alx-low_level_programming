#include "main.h"
/**
 *_islower - checks for lowercase letters
 *@c: the character to be examined
 *Return: 1 for lowercase character or 0 for anything else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
return (0);
}
