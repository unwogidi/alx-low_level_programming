#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - checks the code
 * @argc: number of arguments
 * @argv: arrays of arguments
 * Return: 0 Success
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*calc)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	calc = get_op_func(argv[2]);

	if (calc == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = calc(num1, num2);
	printf("%d\n", result);

	return (0);
}
