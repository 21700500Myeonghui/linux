#include "21700500.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int compares(const void *a, const void *b);

int sort_digits(char *n)
{
	qsort(n, strlen(n), sizeof(char), compares);
	return atoi(n);
}


int compares(const void *a, const void *b)
{
        char num1 = *(char *)a;
        char num2 = *(char *)b;

        if (num1 < num2)
                return -1;
	else if (num1 > num2)
                return 1;
	else
		return 0;
}

