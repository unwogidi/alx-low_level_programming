#include <stdio.h>

/**
 * main - a program that prints its name
 * @argc - size of array
 * @argv - array
 * Return: 0 Success
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
