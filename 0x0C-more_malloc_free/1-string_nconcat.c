#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: Number of bytes to copy from s2 into s1.
 *
 * Return: pointer to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	int i;
	unsigned int j;
	unsigned int l1;
	unsigned int l2;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	l1 = _strlen(s1);
	l2 = _strlen(s2);
	if (n >= 12)
		n = 12;
	str = malloc(sizeof(char) * (l1 + n + 1));
	if (!str)
		return (0);
	for (i = 0; s1[i]; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
		str[i + j] = s2[j];
	str[i + j] = '\0';
	return (str);
}


/**
 * _strlen - calculate the lenght of a string
 * @s: string
 * Return: lenght of the s string
 */

int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		s++;
		c++;
	}
	return (c);
}
