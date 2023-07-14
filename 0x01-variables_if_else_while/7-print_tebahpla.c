#include <stdlib.h>
#include <stdio.h>

/**
 * main - Determines if a number is positive, negative or zero.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char cha = 'z';

	while (cha >= 'a')
	{
		putchar(cha);
		cha--;
	}
	putchar('\n');

	return (0);
}
