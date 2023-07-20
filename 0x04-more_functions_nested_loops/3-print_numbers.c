#include "main.h"

/**
 * Print_numbers - Print 0-9
 * Return: Void
 */

void print_numbers(void)
{
	int num;

	do {
		_putchar(num + 48);
		num++;
	} while (num >= 0 && num <= 9);
	_putchar('\n');

}
