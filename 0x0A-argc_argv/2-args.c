#include <stdio.h>
#include "main.h"

/**
 * main - print all the received arguments
 * @argc: The number of specific arguments
 * @argv: The array of specific arguments
 *
 * Return: Always 0 (Success)
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
