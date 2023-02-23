#include "main.h"
/**
 * _isdigit - input to be checked
 * Return: 1 if c is a digit otherwise 0 if it isint
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
