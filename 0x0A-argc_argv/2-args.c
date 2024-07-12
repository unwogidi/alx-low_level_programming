#include <stdio.h>

/**
 * main - program that prints all arguments it receives
 * @argc: size of the array
 * @argv: pointer to an array
 * Return: 0 Success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
