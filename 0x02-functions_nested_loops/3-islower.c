#include "main.h"
/**
 * _islower - check if char is lower case
 * @c: is the char to be checked
 * Return: 1 if char is lower case, otherwise 0.
 */
int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
