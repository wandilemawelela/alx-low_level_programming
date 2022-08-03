#include "3-calc.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that perfroms simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int arg1, arg2, res;
	char op;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error: invalid number of arguments\n");
		exit(98);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	f = get_op_func(argv[2]);

	if (f == NULL)
	{
		printf("Error: invalid number of arguments\n");
		exit(99);
	}

	op = *argv[2];

	if ((op == '%' || op == '/') && arg2 == 0)
	{
		printf("Error: division by zero\n");
		exit(100);
	}
	res = f(arg1, arg2);

	printf("%d %c %d = %d\n", arg1, op, arg2, res);

	return (0);
}
