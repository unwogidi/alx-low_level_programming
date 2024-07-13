#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program tha prints the minimum number of coins to make
 *        change for an amount of money
 * @argc: the number of arguments passed to the program
 * @argv: an array of atrings representing the arguments
 * Return: 0 Success
 */
int main(int argc, char *argv[])
{
	int cents, coins;
	coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	coins += cents / 25;
	cents %= 25;
	coins += cents / 10;
	cents %= 10;
	coins += cents / 5;
	cents %= 5;
	coins += cents / 2;
	cents %= 2;
	coins += cents / 1;

	printf("%d\n", coins);
	return (0);
}
