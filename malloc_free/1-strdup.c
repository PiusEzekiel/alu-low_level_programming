#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a new string
 * @str: the new string
 * Return: void
 */

char *_strdup(char *str)
{
	char *duplicatedString;

	int i, len = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; ++i)
		++len;
	duplicatedString = malloc(sizeof(char) * (len + 1));
	if (duplicatedString == NULL)
		return (NULL);
	for (i = 0; str[i]; ++i)
		duplicatedString[i] = str[i];
	duplicatedString[len] = '\0';
	return (duplicatedString);
}
