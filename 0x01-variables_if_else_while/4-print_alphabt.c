#include <stdlib.h>
#include <stdio.h>

/**
 * main - Determines if a number is positive, negative or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char al = 'a';

	while (al <= 'z')
	{
		if ((al != 'q') || (al != 'e'))
		{
			putchar(al);
		}
		al++;
	}
	putchar('\n');
	return (0);
}

