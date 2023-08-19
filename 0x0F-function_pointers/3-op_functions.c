#include "3-calc.h"

/**
 * op_add - run addition operation
 * @a: first operand
 * @b: second operand
 *
 * Return: sum of @a and @b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction operation
 * @a: first operand
 * @b: second operand
 *
 * Return: diff of @a and @b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - run multiplication operation
 * @a: first operand
 * @b: second operand
 *
 * Return: product of @a and @b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - run division operation
 * @a: first operand
 * @b: second operand
 *
 * Return: result of division of @a and @b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - run mod operation
 * @a: first operand
 * @b: second operand
 *
 * Return: remainde of @a and @b division
 */
int op_mod(int a, int b)
{
	return (a % b);
}
