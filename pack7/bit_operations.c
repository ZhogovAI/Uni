#include <stdio.h>
#include "dash.h"


int main(void)
{

	int n, k;
	if (read_two_numbers(&n, &k))
	{
		printf("Input error");
		return 0;
	}


	
	binary_print((1 << n) - 1);

	resh(n, k);
	
	return 0;
}
