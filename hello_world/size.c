#include <stdio.h>

/**
 * a program that prints the size of various types on 
 * computers they are run on.
 *
 * Return: 0
 */

int main()
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of int: %d byte(s)\n", sizeof(int));
	printf("Size of long int: %d byte(s)\n", sizeof(long int));
	printf("size of long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of float: %d bytes(s)\n", sizeof(float));

	return(0);
}
