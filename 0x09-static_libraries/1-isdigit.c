#include "main.h"

/**
 * _isdigit - check if the character is a digit
 * @c: is a parameter to be checked
 * Return: Always 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
