#include <stdlib.h>
#include <time.h>

/* 
 * This is function will say if a random number is positive, negative or zero. 
 */

int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf(n, "is positive\n");
	} else if (n == 0)
	{
		printf(n, "is zero\n");
	} else
    	{
		printf(n, "is negative");
		return (0);
}
