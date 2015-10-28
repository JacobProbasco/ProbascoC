#include <stdio.h>
#include <time.h>
#include <signal.h>
#include <stdlib.h>
void fun2()
{
	printf("Just got the QUIT signal.");
	exit(0);
}
void fun()
{
	printf("This is a signal handler\n");
	printf("the action to be taken\n");
	printf("when the program receives ctl-c.");
}
main()
{
	int number = 0;
	printf("%d\n", getpid());
	signal(SIGQUIT, fun2);
	signal(SIGINT, fun);
	while(1)
	{
		printf("Hello %d\n", number++);
		sleep(4);
	}
}
