#include "main.h"
/**
 *_islower - checks for lowercase letters
 *@c - the character to be examined
 *Returns 1 for lowercase and 0 for anything else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
return (0);
}
