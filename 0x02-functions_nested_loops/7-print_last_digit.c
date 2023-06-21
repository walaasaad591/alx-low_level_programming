#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @x: The number in question.
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int x)
{
	int lastDigit = x % 10;

	if (lastDigit < 0)
		lastDigit *= -1;

	_putchar(lastDigit + '0');

	return (lastDigit);
}

