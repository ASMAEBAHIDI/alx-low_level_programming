#include "main.h"
/**
 * _puts - Display a string
 * @str: string to shox
 *
 * Return: Nothing.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
