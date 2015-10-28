#include <stdio.h>
#include <string.h>
main(int argc, char **argv)
{

	int i;
	for ( i = 1; i < argc; i++)
	{
		sleep(3);
		system(argv[i]);
	}
	
	char command[100];
	strcpy(command, "ls ");
	strcat(command, "/etc");
	printf("About to execute %s\n", command);
	sleep(10);
	system(command);
}
