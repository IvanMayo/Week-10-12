#include <stdio.h>

#define ALL_NUMBERS 8
/*define my variable and the amount of numbers it will have */
int main()
{
	int numbers[ALL_NUMBERS] = {2, 4, 5, 7, 3, 9, 4, 8 };
	int *numbers_ptr; /* this pointer will select the numbers */

/* I condition my pointer to select the first number of the array, when the pointer is less that the numbers in the array it will sum one unit to the pointer, with this it can move the position of the numbers and set them to 0 */
	for (numbers_ptr = &numbers[0]; numbers_ptr < &numbers[ALL_NUMBERS]; ++numbers_ptr) {
		*numbers_ptr = 0;
	}

	int counter;
/* this is the part which prints the results   */
	for (counter = 0; counter < ALL_NUMBERS; ++counter) {
		printf("numbers[%d] = %d\n", counter, numbers[counter]);
	}

	return 0;
}
