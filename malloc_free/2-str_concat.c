#include "main.h"
#include <stdlib.h>


/**
* *str_concat - function
* @s1: string 1 to concatenate
* @s2: string 2 to concatenate
* Description: that concatenates two strings
* Return: pointer new allocated space s1 followed by s2 and null terminated
*/
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int i = 0, i2 = 0, r1 = 0, r2 = 0;

	while (s1 && s1[r1])
		r1++;
	while (s2 && s2[r2])
		r2++;
	s3 = malloc(sizeof(char) * (r1 + r2 + 1));
	if (s3 == NULL)
		return (NULL);

	i = 0, i2 = 0;

	if (s1)

	{
		while (i < r1)
		{
			s3[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (i < (r1 + r2))
		{
			s3[i] = s2[i2];
			i++;
			i2++;
		}
	}
	s3[i] = '\0';
	return (s3);
}
