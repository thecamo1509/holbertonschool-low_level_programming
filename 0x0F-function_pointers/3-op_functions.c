#include "3-calc.h"
#include <stdlib.h>
/**
 * op_add - Returns the sum of the parameters
 * @a: Fist number
 * @b: Second number
 * Return: The result of the sum
 */
int op_add(int a, int b)
{
	int ans;

	ans = (a) + (b);

	return (ans);
}
/**
 * op_sub - Substraction of the parameters
 * @a: Fist number
 * @b: Second number
 * Return: The result of the substraction
 */
int op_sub(int a, int b)
{
	int ans;

	ans = (a) - (b);

	return (ans);
}
/**
 * op_mul - Multiplying of the parameters
 * @a: Fist number
 * @b: Second number
 * Return: The product
 */
int op_mul(int a, int b)
{
	int ans;

	ans = (a) * (b);

	return (ans);
}
/**
 * op_div - Division of the parameters
 * @a: Fist number
 * @b: Second number
 * Return: The result of the division
 */
int op_div(int a, int b)
{
	int ans;

	ans = (a) / (b);

	return (ans);
}
/**
 * op_mod - Returns the mod of the parameters
 * @a: Fist number
 * @b: Second number
 * Return: The module
 */
int op_mod(int a, int b)
{
	int ans;

	ans = (a) % (b);

	return (ans);
}
