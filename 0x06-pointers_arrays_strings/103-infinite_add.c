#include "main.h"

void rev_string(char *n)
{
	for (int i = 0, j = strlen(n) - 1; i < j; i++, j--)
	{
		char temp = n[i];

		n[i] = n[j];
		n[j] = temp;
	}
}

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, i = strlen(n1) - 1, j = strlen(n2) - 1, digits = 0;

	while (i >= 0 || j >= 0 || overflow)
	{
		int val1 = i >= 0 ? n1[i--] - '0' : 0;
		int val2 = j >= 0 ? n2[j--] - '0' : 0;
		int temp_tot = val1 + val2 + overflow;

		overflow = temp_tot >= 10;

		if (digits >= size_r - 1 || (digits == size_r - 2 && overflow))
			return (0);
		r[digits++] = temp_tot % 10 + '0';
	}
	r[digits] = '\0';
	rev_string(r);
	return (r);
}
