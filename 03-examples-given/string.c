#include <stdio.h>
#include <string.h>
main()
{
	char line[100];
	gets(line);
	char * where;

	where = strchr(line, '\0');
	printf("%d\n", where - line);
	strcpy(where, "michael");
	printf("%s\n", line);
}
