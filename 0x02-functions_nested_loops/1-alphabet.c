#include "main.h"
/**
 * void print_alphabet - -function to print a to z
 * Return: 0 (success)
 */

void print_alphabet(void)
{
	char i;

	for (i ='a'; i <= 'z'; i++)
	{
		_putchar(i);
		_putchar('\n');
	}
	return (0);
}
