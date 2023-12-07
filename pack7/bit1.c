#include <stdio.h>



int main(void)
{
	int number1, number2, shift_number;
	binary_print(7);
	if (read_two_numbers(&number1, &number2))
	{
		printf("Input error");
		return 0;
	}
	binary_print(number1);
	printf("= number1 = %d\n", number1);
	binary_print(number2);
	printf("= number2 = %d\n", number2);
	binary_print(number1 & number2);
	printf("= number1 & number2 = %d\n", number1 & number2);
	binary_print(number1 | number2);
	printf("= number1 | number2 = %d\n", number1 | number2);

	printf("\n");
	binary_print(number1);
	printf("= number1 = %d\n", number1);
	binary_print(~number1);
	printf("= ~number1 = %d\n", ~number1);
	
	printf("Enter shift number: ");
	if (scanf("%d", &shift_number))
	{
		
		binary_print(number2);
		printf("= number2 = %d\n", number2);
		binary_print(number2 >> shift_number);
		printf("= number2 >> %d = %d\n", shift_number, number2 >> shift_number);
		binary_print(number2 << shift_number);
		printf("= number2 << %d = %d\n", shift_number, number2 << shift_number);
		
	}  
	return 0;
}