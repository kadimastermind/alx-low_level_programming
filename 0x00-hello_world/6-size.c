#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (Success)
 */
int main(void)
{char a;
int b;
long int c;
long long int d;
float e;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of an long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));	
printf("Size of a float: %lu byte(s)", (unsigned long)sizeof(e));
return (0);
}
