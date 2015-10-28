#include <stdio.h>
#define SIZE 5
main()
{
	int i;
	int sum = 0;
	//
	//	3 parts to the for line
	//	1st part is typically an initialization  i = 0
	//	2nd part is a test
	//	3rd part is a modification the test variable
	//
	
	int data[SIZE];
	for ( i = 0; i < SIZE; i = i + 1 )
		data[i] = i ;

	for ( i = 0; i < SIZE; i = i + 1 )
		printf("%d\n", data[i]);
}
