#include <stdio.h>
#include <unistd.h>
main()
{
	int i = 0;
	printf("Using a while.\n");
	while ( i < 10 )
	{
		printf("%d\n", i);
		i++;
	}
	printf("Now with a for.\n");
	sleep(5);
	for ( i = 0; i < 10; i++)
		printf("%d\n", i);
}
