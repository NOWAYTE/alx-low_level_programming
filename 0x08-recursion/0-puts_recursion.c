#include "main.h"
/**
 * main - Entry to the program
 * _puts_recusrion -Function that prints a string followed by a new line
 *
 * return: Always 0 (success)
 *
 */
void _puts_recursion(char *s)
{
	int i;

	if (s == NULL)
	{
		return;
	}else{
		for ( i = 0; i != EOF; i++)
		{
			_putchar(s);
			_putchar("\n");
		}
	}
}
int main()
{
	_puts_recursion("puts with recursion");

	return (0);

}
