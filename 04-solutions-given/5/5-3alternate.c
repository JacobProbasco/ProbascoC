//
//   Exercise 5-3
//
#include <stdio.h>
#include <string.h>
#define MAXLINE 100
main()
{
     int c, i;
     int count = 0;
     char line[MAXLINE];
     while(gets(line))
     	if ( strlen(line) < 20 )
		printf("%s\n", line);
}
