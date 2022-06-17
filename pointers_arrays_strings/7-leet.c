#include "main.h"
/**
* leet - function
* @s: array
* Description: that encodes a string into 1337, Letters a replaced
* * Return: s
*/
char *leet(char *s)
{
	int num, le;
	char alpha[] = "AEOTLaeotl";
	char numb[] = "4307143071";

	for (num = 0; s[num]; num++)
	{
		for (le = 0; alpha[le]; le++)
			if (s[num] == alpha[le])
			{
				s[num] = numb[le];
				/*break;*/
			}
	}
	return (s);
}
