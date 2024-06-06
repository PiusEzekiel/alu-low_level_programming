#include "main.h"
#include <stdio.h>

/** 
 * puts2 - prints every other character
 *
 * str: gets the character
 *
 * Return: Always 0
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
