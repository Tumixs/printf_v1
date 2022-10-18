#include "main.h"

/**
 * arrayprinter - prints an array of character
 * @array: array to print
 *
 * Description: will not print if array is NULL
 * Return: returns an integer- the number of character printed
 */
int arrayprinter(char *array)
{
	int i = 0;

	while (*array)
	{
		_putchar(*array++);
	}
	return (i);
}
