#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/* 
 * main - Entry point
 *
 * Description:print value of n and the status ; zero ,positive, negative
 *
 * Return : Always 0 (success)
 *
 */
 /* betty style doc for function main goes there */

    	int main(void)
	{

	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	/* your code goes there */

	return (0);


       		/*my final code*/

		if (n > 0)

		printf("%i is positive\n", n);

		else if (n == 0)

		printf("%i is zero\n", n);

		else

		printf("%i is negative\n", n);

		return (0);

}
