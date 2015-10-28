//
//   Exercise 5-4
//
#include <stdio.h>
#define MAXLINE 100
main()
{
     int c, i;
     int count = 0;
     char line[MAXLINE];

     while(gets(line))
     	if(line[0] == line[strlen(line) - 1] )
		printf("%s\n", line);
		
}
