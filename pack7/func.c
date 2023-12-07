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


