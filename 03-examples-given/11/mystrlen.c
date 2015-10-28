/* mystrlen.c */
#include <stdio.h>
#define MAX 100
int mystrlen(char *);
main()
{
	char line[MAX];
	int len;
	gets(line);    			/* get line from user */
	len = mystrlen(line);  	    	/* invoke strlen */
	printf("%d is length of %s\n", len, line);
}
int mystrlen(char s[])   /* s points to line */
//int mystrlen(char *s)   /* s points to line */
{
	printf("%d\n", sizeof(s));
	int ct = 0;
	
	while(*s != '\0')
	{   	
		s++;             
		ct++;            
	}
	
	return(ct);          
}
