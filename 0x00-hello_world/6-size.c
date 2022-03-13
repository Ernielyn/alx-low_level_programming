#include <stdio.h>

int main(void)
/**
*Main is the function responsible for the starting and execution of a programme
*/
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(short int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int))
	printf("Size of a float: %d byte(s)\n", sizeof(float));

	return(0);
}
