#include "main.h"

/**
 * _islower - checks for lowercase
 * @c:character to check if it islowercase.
 * Return: 1 if lowercase, otherwise 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
