//
//  localtime.c
//

#include <stdio.h>
#include <time.h>

main()
{
	struct tm *pts;
	long int clock;
	
	time(&clock);
	printf("%ld\n",clock);
	
	pts = localtime(&clock);
	printf("%d/%d/%d\n", pts -> tm_mon + 1, pts -> tm_mday, 
		pts -> tm_year + 1900);

	char line[100];
	strftime(line, 100, "YR MO DAY =  %Y/%m/%d", pts);
	printf("%s\n", line);
}
