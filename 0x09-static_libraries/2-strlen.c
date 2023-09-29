#include "main.h"

/**
 * _strlen - Function that returns the length of string
 * @s:character of string
 *
 * Return: Alway (0)
 */

int _strlen(char *s)
{
	int total_len;

	total_len = 0;
	while (s[total_len] != '\0')
	{
		total_len++;
	}

	return (total_len);
}
