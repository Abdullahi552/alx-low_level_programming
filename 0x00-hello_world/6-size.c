#include <stdio.h>

/**
 * main - print the string in the put function
 *
 * description: using the main function
 * this program prints " the size of various type
 * Return: 0
 */

int main(void)
{
	int size_1 = 1;
        int size_2 = 4;
        int size_3 = 8;
	int size_4 = 8;
	int size_5 = 4;

	printf("size of a char: %d bytes(s)\n", size_1);
	printf("size of an int: %d bytes(s)\n", size_2);
	printf("size of a lonf int: %d bytes(s)\n", size_3);
	printf("size of a long long int: %d bytes(s)\n", size_4);
	printf("size of a float: %d byte(s)\n", size_5);
        return (0);
}
