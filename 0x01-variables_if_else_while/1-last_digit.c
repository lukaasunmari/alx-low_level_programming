#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* main - remainder of a random number */
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = % 10;

	if (a > 5)
		printf("last digit of %d is %d and is greater than 5/n", n, a);

	else if (a == 0)
		printf("last digit of %d is %d and is 0/n", n, a);

	else
		printf("last digit of %d is %d and is less than 6 and not 0/n", n, a);
	/* your code goes there */
	return (0);
}
