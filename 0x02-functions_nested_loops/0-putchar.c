#include <stdio.h>
#include "main.h"

/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Description: 'puts program'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

char x[] = "_putchar\n";
int i;
for (i = 0; i < 9; i++)
{
_putchar(x[i]);
}

return (0);
}
