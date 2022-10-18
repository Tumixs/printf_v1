#include "main.h"

/**
 * base_converter - converts given number to desired base_n
 * @num: number to be converted
 * @base_n: base to convert to
 *
 * Description: will only store as much as 50 digits from
 * the conversion due to the buffer size.
 * Return: returns a pointer to the converted number
 */
char *base_converter(long int num, int base_n)
{
	char *ptr;
	static char buffer[50];
	static char *digits = "0123456789ABCDEF";

	ptr = &buffer[49];
	*ptr = '\0';
	do {
		*--ptr = digits[num % base_n];
		num /= base_n;
	} while (num != 0);
	return (ptr);
}
