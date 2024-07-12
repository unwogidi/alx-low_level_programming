#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 * @argc: size of the array
 * @argv: pointer to an array
 * Return: 0 Success
 *         1 if program does not recieve two arguments
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", result);
	}
	return (0);
}
