//
//   Exercise 6-2
//
#include <stdio.h>

long power(int base, int expo);  // prototype

main()
{
	long int answer;
	int i;
	int x;
	//
	//      TEST THE FUNCTION 'power()' FOR
	//      VARIOUS POWERS OF  5
	//
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(short int));
	for ( i = 0; i < 15; i++) {
		answer = power(5, i);
		x = answer;
		printf("%15ld %d\n", answer, x);
	}
}

long power(int base, int exponent)
{
     long result = 1;
     int i;
     
     for (i = 0; i < exponent; i++)
          result *= base;
          
     return(result);
}
