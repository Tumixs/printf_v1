/* Testing array and pointer method of accessing strings*/
#include <stdio.h>
/**
 * main - array vs pointer vs STRINGS
 *
 * Return: always 0
 */
int main(void)
{
	char *str1 = "I am here";      /* String literal defined with pointer */
	char str2[] = "I am not here"; /*String literal defined with arrays */

	printf("%s\n", str1);	 /* Prints each char till '/0'*/
	printf("%c\n", str1[9]); /*prints value stored at the index address */
	str1++;			 /* Move pointer address fwd (+1) */
	str1++;			 /* move pointer address fwd (+1) */
	printf("%s\n", str1);	 /* Prints from new address index (address +2) */
	printf("%c\n", str1[0]); /* index is now ahead of inital address (+2) */
	printf("%s\n", str2);
	printf("%lu\n", sizeof(str1));
	printf("%lu\n", sizeof(str2));

	return (0);
}
