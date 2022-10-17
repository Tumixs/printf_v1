#include "main.h"

/**
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
