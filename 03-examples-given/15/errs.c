//
//        errs.c
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

main(int argc, char **argv)
{
	extern int errno;
	extern int sys_nerr;
	FILE *fp;
	
	fp = fopen(argv[1], "r");
	if ( fp == NULL ) 
	{
		printf("%s: %s\n", argv[0], strerror(errno));
		exit(errno);
	}
	
	printf("Printing some error mesages.\n");

	int i;
	for ( i = 0; i < sys_nerr; i++)
		printf("%3d %s\n", i, strerror(i));
	exit(0);
}
