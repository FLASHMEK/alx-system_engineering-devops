#include <stdio.h>
/**
 * main - main function
 * Return: 0 (success)
 *
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("Size of char: %lu .\n", (unsigned long)sizeof(a));
printf("Size of an an int: %lu .\n", (unsigned long)sizeof(b));
printf("Size of a long int: %lu .\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %lu .\n", (unsigned long)sizeof(d));
printf("Size of a float: %lu .\n", (unsigned long)sizeof(f));
return (0);
}
