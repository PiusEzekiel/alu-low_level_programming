#include <stdio.h>

/*
 * swap_int - swapping two ints
 * 
 * @a: one of the ints
 *
 * @b: 2nd int
 *
 * Return: do you really wanna return something
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
