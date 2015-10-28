#include <stdio.h>
#include <stdlib.h>
main()
{
	char line[100];
	double value;
	while(1)
	{
		printf("enter a line (or 'quit' to exit) ");
		fgets(line,100, stdin);
		if ( strcmp(line, "quit\n") == 0 )
			break;
		value = atof(line);
		printf("You entered %f\n", value);
	}
}
