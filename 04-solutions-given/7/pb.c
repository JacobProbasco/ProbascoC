#include <stdio.h>
main()
{
	char line[20];
	unsigned int x;
	x = atoi(gets(line));
	unsigned int y = x;
	while ( y > 0 )
	{
		if ( y & 01 )
			printf("%d", 1);
		else
			printf("%d", 0);
		y = y >> 1;
	}
	printf("\n");
}
