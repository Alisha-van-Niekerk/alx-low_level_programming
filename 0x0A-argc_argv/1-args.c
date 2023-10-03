#include <stdio.h>
#include "main.h"

/**
 * main - prints number of arguments that was passed to the program
 * @argc: The number of specific arguments
 * @argv: The array of specific arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
