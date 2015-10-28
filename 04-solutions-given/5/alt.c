//
//   Exercise 5-3 alternate solution
//
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAXLINE 100
main()
{
	bool x;
     int c, i;
     int count = 0;
     char line[MAXLINE];
     while(gets(line)) 
	if ( strlen(line) < 20 )
		printf("%d %s\n", strlen(line), line);
}
