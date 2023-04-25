#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 *
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	int m;
	int n;

	for (m = 1; m <= 10; m++)
	{
		for (n = 97; n <= 122; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
