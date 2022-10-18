#include "main.h"

/**
 * format_printer - prints according to fromat specifier
 * @k: format specifier
 * @arg: array of arguments
 *
 * Description: ---
 * Return: returns the number of char printed
 */
int format_printer(char k, va_list arg)
{
	int counter = 0;
	int c;
	char *s;
	long int j;

	switch (k)
	{
		case 'c':
			c = va_arg(arg, int);
			_putchar(c);
			counter++;
			break;

		case 's':
			s = va_arg(arg, char *);
			while (*s != '\0')
			{
				_putchar(*s);
				s++;
				counter++;
			}

			break;
		case 'i':
			j = va_arg(arg, long int);
			if (j < 0)
				_putchar('-');
			counter += arrayprinter(base_converter(j, 10));
			break;

		case 'd':
			j = va_arg(arg, long int);
			if (j < 0)
				_putchar('-');
			counter += arrayprinter(base_converter(j, 10));
			break;

	}
	return (counter);
}
