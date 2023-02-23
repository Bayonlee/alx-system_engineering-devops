#include "main.h"
/**
 * _isupper - program to check for uppercase letters
 * Return: 1 if uppercase and 0 for otherwise
 *
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
