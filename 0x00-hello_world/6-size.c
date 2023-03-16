#include<stdio.h>
/**
 * main - A program that print the size of the data type
 * Return: Always 0 (Success)
 */

int main(void)
{
	int intType;
	float floatType;
	long int longintType;
	long long int longlongType;
	char charType;
	
	printf("Size of a char: %zu byte(s)\n",sizeof(charType));
	printf("Size of an int: %zu byte(s)\n",sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n",sizeof(longintType));
	printf("Size of a long long int: %zu byte(s)\n",sizeof(longlongType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));

	return (0);

}
