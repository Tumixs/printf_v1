#include "main.h"
#include <stdio.h>

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
	static char *upper_digits = "0123456789ABCDEF";
	static char *lower_digits = "0123456789abcdef";
	char *digits = upper_digits;
	char sign = 0;
	long int n = num;

	/* checks for -ve numbers, negative %u overflows */
	if (num < 0)
	{
		n = -num;
		sign = '-';
		if (base_n == 'u')
		{
			sign = 0;
			n = (UINT_MAX + 1) - (-num);
		}
	}
	if (base_n == 'u')
		base_n = 10;
	if (base_n == 'x')
	{
		digits = lower_digits;
		base_n = 16;
	}
	ptr = &buffer[49];
	*ptr = '\0';

	do {
		*--ptr = digits[n % base_n];
		n /= base_n;
	} while (n != 0);

	if (sign)
		*--ptr = sign;

	return (ptr);
}
