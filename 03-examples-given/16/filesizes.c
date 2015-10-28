#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
main(int argc, char **argv)
{
	int i;
	struct stat s;
	for ( i = 1; i < argc; i++)
	{
		ans = stat(argv[i], &s);
		if ( ans == -1)
			printf("No such file as %s\n", argv[i])
		else
			printf("%s is of size %d\n", argv[i], s.st_size);
	}
}
