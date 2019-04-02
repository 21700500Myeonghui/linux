#include "21500830.h"
#include <stdlib.h>
#include <stdio.h>


int reverse_digits(int n)
{
	int sum = 0;
	sum+=n%10;
	n/=10;
	while(n>0){
		sum*=10;
		sum+=n%10;
		n/=10;
	}
	return sum;
}

