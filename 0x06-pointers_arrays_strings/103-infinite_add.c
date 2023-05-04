#include "main.h"

/**
 * reverse array
 */
void rev_string(char *n)
{
    int i = 0, j = 0;
    char temp;

    while (*(n + i) != '\0')
    {
        i++;
    }
    i--;

    for (j = 0; j < i; j++, i--)
    {
        temp = *(n + j);
        *(n + j) = *(n + i);
        *(n + i) = temp;
    }
}

/**
 * add 2 numbers together
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int i = 0, j = 0, carry = 0;

    while (*(n1 + i) != '\0' || *(n2 + j) != '\0')
    {
        int val1 = i < strlen(n1) ? *(n1 + i++) - '0' : 0;
        int val2 = j < strlen(n2) ? *(n2 + j++) - '0' : 0;
        carry += val1 + val2;
        if (carry > 9)
        {
            *(r++) = (carry - 10) + '0';
            carry = 1;
        }
        else
        {
            *(r++) = carry + '0';
            carry = 0;
        }
        if (r - size_r == r)
        {
            return 0;
        }
    }

    if (carry > 0)
    {
        *(r++) = carry + '0';
    }
    *(r++) = '\0';

    rev_string(r - (r - size_r > r - 1 ? r - 1 : r - size_r));

    return (size_r < r - r ? 0 : r - (r - size_r > r - 1 ? r - 1 : r - size_r));
}
