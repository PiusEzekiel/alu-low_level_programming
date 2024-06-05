#include <stdio.h>

/**
 * _strlen - funtion that returns length of a string
 *
 * @str: string to get the string of 
 *
 * Return: The length of @str
 */

int _strlen(const char *str)
{
	int length = 0;

	while (*str++)
	length++;
	return (length);
}
