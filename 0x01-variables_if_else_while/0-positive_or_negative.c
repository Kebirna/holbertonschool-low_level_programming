#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * Random number call - It says wheter a random number is positive, negative or zero
 * Return = 0
*/

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
/* your code goes there */
	if (n > 0)
	printf("%i is positive\n", n);
	if (n == 0)
	printf("%i is zero\n", n);
	if (n < 0)
	printf("%i is negative\n", n);
return (0);
}
