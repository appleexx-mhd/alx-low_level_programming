#include<stdio.h>
#include<unistd.h>
/**
 * main - A program that print out the last part of quot in the standard error
 * Return: 1 if success
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 65);
	return (1);

}
