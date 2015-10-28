#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
void ignore()
{
	printf("ignoring\n");
}
void myfunc()
{
	printf("\n\ntoo late\n");
	exit(1);
}
main()
{
	char line[100];
	signal(SIGALRM, myfunc);

	signal(SIGINT, ignore);

	alarm(10);

	printf("enter something: ");

	fgets(line, 100, stdin);

	alarm(0);

	printf("You made it in time\n");
}
