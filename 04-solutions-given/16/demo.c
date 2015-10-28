#include <stdio.h>
#include <stdlib.h>
main()
{
	int x = 123456789;
	FILE *fp;
	fp = fopen("somefile", "w");
	if ( fp == NULL )
	{
		printf("fopen failed\n");
		exit(1);
	}
	fwrite(&x, sizeof(int), 1, fp);
}
