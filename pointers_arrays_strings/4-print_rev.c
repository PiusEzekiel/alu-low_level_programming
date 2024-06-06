#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 * @str: The string
 *
 * Return: Always 0
 */
void print_rev(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	for (len--; len >= 0; len--)
		_putchar(str[len]);

	_putchar('\n');
}
