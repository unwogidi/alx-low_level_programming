#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments passed to program
 * @argv: array of arguments
 * Return: 0 Success, 1 0r 2 on error
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	char *addr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	addr = (char *)main;
	for (i = 0; i < bytes; i++)
	{
		printf("%02x", addr[i] & 0xFF);
		if (i != (bytes - 1))
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
