#include <stdio.h>
/* Code by Jacob Probasco
 * jacobprobasco@outlook.com
 * 19 OCT 2015
 * Find the error
*/ 


int mult(int a, int b)
{
	return( a * b );
}

int main(void)
	{
	int a = 5, b = 10;
	printf("%d * %d = %d\n", a, b, mult(a,b));
}
