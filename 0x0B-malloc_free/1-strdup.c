#include "main.h"
#include "stdlib.h"
/**
 * _strdup - returns a pointer to a newly allocated
 * space in memeory also duplicatethe string it holds
 * to the new space
 * @str: initial input string
 * Return: pointer to the memory allocated
 * which is an array character
 */
char *_strdup(char *str)
{
	size_t i, j;
	char *strdout;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	strdout = (char *)malloc(sizeof(char) * (i + 1));

	if (strdout == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
		strdout[j] = str[j];
	}
	return (strdout);
}
