#include <stdio.h>
/**
 * int print_last_digit(int n);
 *
 * Return: value of the last digit
 */
int main(void)
{
	int r;

	r = print_last_digit(98);

	return (0);
}
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;
	a = n % 10;

	if (a < 0)
		a = -a;

	printf("The last digit is: %d\n", a);

	return (a);
}
