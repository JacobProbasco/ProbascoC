#include <stdio.h>
main()
{
	printf("BEGINNING\n");
#ifdef DEBUG
	printf("DEBUGGING FLAG SET\n");
#endif
	printf("ENDING\n");
}
