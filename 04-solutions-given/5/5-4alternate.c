//
//   Exercise 5-4
//
#include <stdio.h>
#include <string.h>
#define MAXLINE 100
main()
{
     int c, i;
     int count = 0;
     int len;
     char line[MAXLINE];

     while(gets(line))
     {
	len = strlen(line);
     	if(line[0] == line[len -1])
		printf("%s\n", line);
     }
}
