#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "21500830.h"
#include "21700500.h"

#define TRUE 1
#define FALSE 0

int main(){

	char input[2048];
	int is_number;
	int reverse;
	int sort;
	bool is_Prime;

	while(fgets(input,sizeof(input), stdin)!=NULL){
		
		//Recieve a user input
		if(input[strlen(input)-1] == '\n')
		{input[strlen(input)-1]=0;}

		//Terminate condition
		if(strcmp(input, "quit")==0){
		      break;
		}

		is_number= TRUE;
		for(int i=0; i<strlen(input); i++){
		  if(!isdigit(input[i])){
		  printf("Entered input is not a number\n");
		  is_number=FALSE;
		  break;
		  }
		}

		if(is_number){
		 reverse=reverse_digits(atoi(input));
		 sort=sort_digits(input);
		 is_Prime=isPrime(atoi(input));
		 printf("reverse> %d\nsort> %d\n",reverse, sort);
		 printf("isPrime> %s\n",is_Prime?"True":"False");
		 //printf("reverse> %d\n",reverse);
		}

		
	}
}
