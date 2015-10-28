#include <stdio.h>
main()
{
	char strings[5][80];
	
	int i;
	for ( i = 0; i < 5; i++)
	{
		printf("Enter string # %d: ", i + 1);
		gets(strings[i]);
	}
	printf("NOW PRINTING THE STROMGS THAT YOU ENTERED\n");
	for ( i = 0; i < 5; i++)
		printf("%d\t%s %d\n", i + 1, strings[i], strlen(strings[i]));
}
