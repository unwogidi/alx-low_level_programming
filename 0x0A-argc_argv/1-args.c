#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 * @argc: size of the array
 * @argv: pointer to an array
 * Return: 0 Success
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
