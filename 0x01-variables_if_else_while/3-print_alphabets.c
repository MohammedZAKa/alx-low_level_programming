#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the lower and Upper alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char al = 'a';
	char AL = 'A';

	while (al <= 'z')
	{
		putchar(al);
		al++;
	}
	while (AL <= 'Z')
	{
		putchar(AL);
		AL++;
	}
	putchar('\n');
	return (0);
}
