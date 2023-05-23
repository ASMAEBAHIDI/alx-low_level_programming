#include "main.h"

/**
 * _isalpha - Test wheter c is lowercase
 * @c: caracter to test
 *
 * Return: 1 if c character is in the alphabet, 0 otherwise.
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
