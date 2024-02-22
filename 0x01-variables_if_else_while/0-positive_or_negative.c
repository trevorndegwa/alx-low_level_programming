#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * testing n is +/ve or -/ve
 * @n: no. to b printed
 * return: return 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d zero\n", n);

	return (0);
}
