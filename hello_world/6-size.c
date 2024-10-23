#include <stdio.h>

/**
 * main - Print the size of differents data
 * Return: 0
 */

int main(void)
{
	printf("Size of a char: 1 byte(s)", sizeof(char));
	printf("Size of an int: 4 byte(s)", sizeof(int));
	printf("Size of a long int: 4 byte(s)", sizeof(int));
	printf("Size of a long long int: 8 byte(s)", sizeof(int));
	printf("Size of a float: 4 byte(s)", sizeof(float));
	return (0);
}
