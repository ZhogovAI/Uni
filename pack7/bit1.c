#include <stdio.h>
#include <math.h>
#include <time.h>
#include "dash.h"

void binary_print(int number)
{
	int index = 8 * sizeof(int) - 1;
	unsigned int mask = 1 << index;
	for (; index >= 0; index--, mask >>= 1)
	{
		if (number & mask) printf("1"); else printf("0");
		if (index % 8 == 0) printf(" "); 
	}
}

int read_two_numbers(int *number1, int *number2)
{
	printf("\nEnter two numbers: ");
	if (scanf("%d %d", number1, number2) == 0) return -1;
	return 0;


	
}



int resh(int n, int k)
{
	double vremya;


	int number, sch;

	int index = 8 * sizeof(int) - 1;
	unsigned int mask = 1 << index;

	 //arr = (int *)malloc(capacity*sizeof(int));

	// int shift_number;
	//binary_print(7);
	


	number = (1U << n) - 1;

	sch = 0;
	vremya = clock();
	for(int i = 0; i < 1U << n; i++){

		index = 8 * sizeof(int) - 1;
		mask = 1 << index;

		for(; index >= 0; index--, mask >>=1){
			if (number & mask){
				sch++;
			}
		}

		if (sch == k){
			int index1 = 8 * sizeof(int) - 1;
			unsigned int mask1 = 1 << index1;

			for(int j = 1; index1 >= 0; index1--, mask1 >>= 1, j++){
				if (number & mask1){
					printf("%d", 33-j);
				}
			}
			printf(" ");
		}
		
		number -= 1;
		sch = 0;
	}
	vremya = (clock() - vremya)/CLOCKS_PER_SEC;
	
	printf("%.2f", vremya); // dva znaka posle zapyatoi
	
	return 0;
}
