#include <stdio.h>

int alphacheck();

main()
{
	char line[100];
	char c;
	int count = 0;
	gets(line);
/*
	while((c = getchar()) != EOF)
	{
		if(c != '\n')
		{
			line[count++] = c;
		}		
		else
		{
			line[count++] = '\0'; 
			printf("ELSE: %d %d", count, alphacheck(line));
			count = 0;
		}
	}
*/
	printf("%i\n", alphacheck("test"));
	printf("%i\n", alphacheck("test1"));
	printf("%i\n", alphacheck("Test"));
	printf("%i\n", alphacheck("Test1"));
}

int alphacheck(char string[])
{
	int i = 0;
	for(i = 0; string[i] != '\0';i++)
	{
	//	putchar(string[i]);
		if(!((string[i] <= 'z' && string[i] >= 'a') || (string[i] <= 'Z' && string[i] >= 'A')))
		{
	//		printf("%c", string[i]);
			return(1);
		}
	}
	return(0); 
}
