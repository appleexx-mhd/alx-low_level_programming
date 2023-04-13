#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concatenate two strings up to n bytes.
 * @s1: source string
 * @s2: string to truncate up to n bytes
 * @n: number of bytes to truncate by
 * Return: pointer to new buffer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *x;
	unsigned int count1, count2, sizeBuffer, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (count1 = 0; s1[count1]; count1++);
	for (count2 = 0; s2[count2]; count2++);
	count2 > n ? (count2 = n) : (n = count2);
	sizeBuffer = count1 + count2 + 1;
	x = malloc(sizeBuffer * sizeof(char));
	if (x == NULL)
		return (NULL);
	for (i = 0; i < sizeBuffer - 1; i++)
		i < count1 ? (x[i] = s1[i]) : (x[i] = s2[i - count1]);
	x[sizeBuffer] = '\0';
	return (x);
}
