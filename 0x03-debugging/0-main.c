#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * positive_or_negative - main block
 * @i: Get a random number and print the number
 * and if it is positive, negative, or zero
 * Return: i
 */
void positive_or_negative(int i)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);

	return (i);
}
