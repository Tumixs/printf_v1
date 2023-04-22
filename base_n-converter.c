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
char *base_converter(int num, int base_n)
{
	char *ptr;
	static char buffer[50];
	static char *digits = "0123456789ABCDEF";
	char sign = 0;
	unsigned int n = num;
	
	
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
		digits = "0123456789absdef";
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
