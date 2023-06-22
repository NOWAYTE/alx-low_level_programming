#include "function_pointers.h"
#include "3-calc.h"
/**
 * op_add - A function that add two numbers
 * @a: integer parameter
 * @b: integer parameter
 *
 * Return: Always 0 (success)
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - A function that subtracts two numbers
 * @a: integer parameter
 * @b: integer parameter
 * Return: Always 0 (success)
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - A function that multiplies two numbers
 *
 * @a: integer parameter
 * @b: integer parameter
 *
 * Return: Always 0 (success)
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - A function that divides two numbers
 * @a: integer parameter
 * @b: integer parameter
 *
 * Return: Always 0 (success)
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - A function that finds the rem of two div numbers
 *
 * @a: integer parameter
 * @b: integer parameter
 *
 * Return: Always 0 (success)
 */
int op_mod(int a, int b)
{
	return (a % b);
}
