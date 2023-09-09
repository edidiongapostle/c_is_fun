#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main - a C program that prints a popular quote
 *
 * Return: 1
 */

int main()
{
	write(1, "Honestly there's mo quote in mind\" - Ahpo Eddy, 1997-04-02\n", 59);
	return (1);
}
