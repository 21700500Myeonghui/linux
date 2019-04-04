#include "21500830.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


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

char* binarized(int n)
{
	char* bi = (char*)malloc(sizeof(char)*1);
	char buff[2]={0,};
	int i=0;
	for(i=0; n!=0; i++){
		bi = (char*)realloc(bi,sizeof(char)*(i+2));
		sprintf(buff,"%d",n%2);
		bi[i] = buff[0];
		n = n/2;
	}
	//bi[i] = 0;
	char *bi_re = (char*)calloc((i+1),sizeof(char));
	for(int j=0; j!=i; j++){
		bi_re[j] = bi[i-1-j];
	}
	free(bi);
	return bi_re;
}
