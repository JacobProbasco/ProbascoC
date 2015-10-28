#include <stdio.h>
main()
{
	int i = 1;
	char line[100];

	while ( 1 )
	{
 		printf("Enter a string: ");
		gets(line);
		printf("%d\t You entered: %s\n", i++, line);
	}
}
