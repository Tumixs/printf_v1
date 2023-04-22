/*
 * Test file 2
 * Author: Asere Oluwatumise S.
 */
#include "../main.h"
#include <stdio.h>
void bintest(void);
/**
 * main - program start
 *
 * Return: returns 0
 */
int main(void)
{
	bintest();

	return (0);
}

/**
 * bintest - tests the non-custom %b sepcifier
 */
void bintest(void)
{
	int len1, len2;

	len1 = _printf("%b", -1024);
	putchar('\n');
	len2 = printf("%b", -1024);
	putchar('\n');
	_printf("len1: %d, len2: %d", len1, len2);
	putchar('\n');
	_printf("%b", UINT_MAX);
	putchar('\n');
	printf("%b", UINT_MAX);
	putchar('\n');
}
