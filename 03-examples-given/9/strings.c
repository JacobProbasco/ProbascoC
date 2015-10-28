#include <stdio.h>
main()
{
	char strings[5][50];
	int i = 0;
	while ( i < 5 )
	{
		printf("Enter string # %d -> ", i + 1 );
		gets(strings[i++]);
	}
	printf("You entered\n");
	i = 0;
	while ( i < 5 )
	{
		printf("%d %s\n", i + 1, strings[i]);
		i++;
	}
}
